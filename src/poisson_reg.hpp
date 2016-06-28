using namespace Rcpp;
using namespace arma;

// [[Rcpp::export]]
SEXP poisson_reg(SEXP y, SEXP X, SEXP b, SEXP B, int burnin = 500, int run = 500,  double r0 = 20, int mc_draws = 1E4) {
  
  C11RNG c11r;

  Rcpp::NumericVector yr(y);
  Rcpp::NumericVector br(b);

  Rcpp::NumericMatrix Xr(X);
  Rcpp::NumericMatrix Br(B);

  const  colvec y_vec(yr.begin(), yr.size(), false);
  const colvec b_vec(br.begin(), br.size(), false);

  const mat X_mat(Xr.begin(), Xr.nrow(), Xr.ncol(), false);
  const mat B_mat(Br.begin(), Br.nrow(), Br.ncol(), false);

  int n = X_mat.n_rows;
  int p = X_mat.n_cols;
  vec beta = ones(p);

  mat B_inv = inv(B_mat);
  vec B_invb = solve(B_mat, b_vec);

  double log_r0 = log(r0);

  // PG latent variable
  colvec w = ones(yr.size());

  // X corresponds to y=1
  // mat X1 = X_mat.rows(pos_group);
  // X corresponds to y=0
  // mat X0 = X_mat.rows(zero_group);

  mat trace_beta(run, p);

  for (int i = 0; i < (burnin + run); ++i) {
    // compute  Xbeta
    vec Xbeta = X_mat * beta;
    
    vec exp_Xbeta = exp(Xbeta);
    vec r = exp_Xbeta* r0;
    vec log_r = log(r);

    vec alpha1 = ones(n) % r;
    vec alpha2 = Xbeta - log_r;
    w = rpg(alpha1, alpha2);

    mat wX_tilde = X_mat;
    wX_tilde.each_col() %= w;

    vec k = y_vec - r / 2.0 + w % log_r;

    mat V = inv(X_mat.t() * wX_tilde + B_inv);
    vec m = V * (X_mat.t() * k + B_invb);

    beta = trans(chol(V)) * randn(p) + m;

    if (i >= burnin) {
      trace_beta.row(i - burnin) = beta.t();
    }
  }

  return Rcpp::List::create(Rcpp::Named("beta") = trace_beta);
}
