// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// binomial_reg
SEXP binomial_reg(SEXP y_r, SEXP n_r, int burnin, int run, double r0, int mc_draws);
RcppExport SEXP scalableDA_binomial_reg(SEXP y_rSEXP, SEXP n_rSEXP, SEXP burninSEXP, SEXP runSEXP, SEXP r0SEXP, SEXP mc_drawsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type y_r(y_rSEXP);
    Rcpp::traits::input_parameter< SEXP >::type n_r(n_rSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type run(runSEXP);
    Rcpp::traits::input_parameter< double >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< int >::type mc_draws(mc_drawsSEXP);
    rcpp_result_gen = Rcpp::wrap(binomial_reg(y_r, n_r, burnin, run, r0, mc_draws));
    return rcpp_result_gen;
END_RCPP
}
// logistic_reg
SEXP logistic_reg(SEXP y, SEXP X, SEXP b, SEXP B, int burnin, int run, double r0);
RcppExport SEXP scalableDA_logistic_reg(SEXP ySEXP, SEXP XSEXP, SEXP bSEXP, SEXP BSEXP, SEXP burninSEXP, SEXP runSEXP, SEXP r0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    Rcpp::traits::input_parameter< SEXP >::type b(bSEXP);
    Rcpp::traits::input_parameter< SEXP >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type run(runSEXP);
    Rcpp::traits::input_parameter< double >::type r0(r0SEXP);
    rcpp_result_gen = Rcpp::wrap(logistic_reg(y, X, b, B, burnin, run, r0));
    return rcpp_result_gen;
END_RCPP
}
// logistic_reg_random_effect
SEXP logistic_reg_random_effect(SEXP y, SEXP X, int burnin, int run, double tau, double c, int mc_draws, int da_ver, double sigma2_ini, bool track_r, bool update_sigma2);
RcppExport SEXP scalableDA_logistic_reg_random_effect(SEXP ySEXP, SEXP XSEXP, SEXP burninSEXP, SEXP runSEXP, SEXP tauSEXP, SEXP cSEXP, SEXP mc_drawsSEXP, SEXP da_verSEXP, SEXP sigma2_iniSEXP, SEXP track_rSEXP, SEXP update_sigma2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type run(runSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    Rcpp::traits::input_parameter< int >::type mc_draws(mc_drawsSEXP);
    Rcpp::traits::input_parameter< int >::type da_ver(da_verSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2_ini(sigma2_iniSEXP);
    Rcpp::traits::input_parameter< bool >::type track_r(track_rSEXP);
    Rcpp::traits::input_parameter< bool >::type update_sigma2(update_sigma2SEXP);
    rcpp_result_gen = Rcpp::wrap(logistic_reg_random_effect(y, X, burnin, run, tau, c, mc_draws, da_ver, sigma2_ini, track_r, update_sigma2));
    return rcpp_result_gen;
END_RCPP
}
// poisson_reg
SEXP poisson_reg(SEXP y, SEXP X, double r_ini, int tune, int burnin, int run, bool fixR, double C, double c_ini, bool MH, bool randomEff, double nu, bool adaptC);
RcppExport SEXP scalableDA_poisson_reg(SEXP ySEXP, SEXP XSEXP, SEXP r_iniSEXP, SEXP tuneSEXP, SEXP burninSEXP, SEXP runSEXP, SEXP fixRSEXP, SEXP CSEXP, SEXP c_iniSEXP, SEXP MHSEXP, SEXP randomEffSEXP, SEXP nuSEXP, SEXP adaptCSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type r_ini(r_iniSEXP);
    Rcpp::traits::input_parameter< int >::type tune(tuneSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type run(runSEXP);
    Rcpp::traits::input_parameter< bool >::type fixR(fixRSEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type c_ini(c_iniSEXP);
    Rcpp::traits::input_parameter< bool >::type MH(MHSEXP);
    Rcpp::traits::input_parameter< bool >::type randomEff(randomEffSEXP);
    Rcpp::traits::input_parameter< double >::type nu(nuSEXP);
    Rcpp::traits::input_parameter< bool >::type adaptC(adaptCSEXP);
    rcpp_result_gen = Rcpp::wrap(poisson_reg(y, X, r_ini, tune, burnin, run, fixR, C, c_ini, MH, randomEff, nu, adaptC));
    return rcpp_result_gen;
END_RCPP
}
// poisson_reg_block_random
SEXP poisson_reg_block_random(SEXP y, SEXP X, double r_ini, int tune, int burnin, int run, bool fixR, double C, double c_ini, double c_ini2, double theta_ts, bool MH, double nu_ini, double sigma2, bool adaptC, bool fixNu, bool centeredRanEff);
RcppExport SEXP scalableDA_poisson_reg_block_random(SEXP ySEXP, SEXP XSEXP, SEXP r_iniSEXP, SEXP tuneSEXP, SEXP burninSEXP, SEXP runSEXP, SEXP fixRSEXP, SEXP CSEXP, SEXP c_iniSEXP, SEXP c_ini2SEXP, SEXP theta_tsSEXP, SEXP MHSEXP, SEXP nu_iniSEXP, SEXP sigma2SEXP, SEXP adaptCSEXP, SEXP fixNuSEXP, SEXP centeredRanEffSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type r_ini(r_iniSEXP);
    Rcpp::traits::input_parameter< int >::type tune(tuneSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type run(runSEXP);
    Rcpp::traits::input_parameter< bool >::type fixR(fixRSEXP);
    Rcpp::traits::input_parameter< double >::type C(CSEXP);
    Rcpp::traits::input_parameter< double >::type c_ini(c_iniSEXP);
    Rcpp::traits::input_parameter< double >::type c_ini2(c_ini2SEXP);
    Rcpp::traits::input_parameter< double >::type theta_ts(theta_tsSEXP);
    Rcpp::traits::input_parameter< bool >::type MH(MHSEXP);
    Rcpp::traits::input_parameter< double >::type nu_ini(nu_iniSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< bool >::type adaptC(adaptCSEXP);
    Rcpp::traits::input_parameter< bool >::type fixNu(fixNuSEXP);
    Rcpp::traits::input_parameter< bool >::type centeredRanEff(centeredRanEffSEXP);
    rcpp_result_gen = Rcpp::wrap(poisson_reg_block_random(y, X, r_ini, tune, burnin, run, fixR, C, c_ini, c_ini2, theta_ts, MH, nu_ini, sigma2, adaptC, fixNu, centeredRanEff));
    return rcpp_result_gen;
END_RCPP
}
// probit_reg_px
SEXP probit_reg_px(SEXP y, SEXP X, SEXP b, SEXP B, int burnin, int run, double r0, int mc_draws, double nu0);
RcppExport SEXP scalableDA_probit_reg_px(SEXP ySEXP, SEXP XSEXP, SEXP bSEXP, SEXP BSEXP, SEXP burninSEXP, SEXP runSEXP, SEXP r0SEXP, SEXP mc_drawsSEXP, SEXP nu0SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    Rcpp::traits::input_parameter< SEXP >::type b(bSEXP);
    Rcpp::traits::input_parameter< SEXP >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type run(runSEXP);
    Rcpp::traits::input_parameter< double >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< int >::type mc_draws(mc_drawsSEXP);
    Rcpp::traits::input_parameter< double >::type nu0(nu0SEXP);
    rcpp_result_gen = Rcpp::wrap(probit_reg_px(y, X, b, B, burnin, run, r0, mc_draws, nu0));
    return rcpp_result_gen;
END_RCPP
}
// probit_reg
SEXP probit_reg(SEXP y, SEXP X, SEXP b, SEXP B, int burnin, int run, double r0, int mc_draws);
RcppExport SEXP scalableDA_probit_reg(SEXP ySEXP, SEXP XSEXP, SEXP bSEXP, SEXP BSEXP, SEXP burninSEXP, SEXP runSEXP, SEXP r0SEXP, SEXP mc_drawsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type y(ySEXP);
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    Rcpp::traits::input_parameter< SEXP >::type b(bSEXP);
    Rcpp::traits::input_parameter< SEXP >::type B(BSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type run(runSEXP);
    Rcpp::traits::input_parameter< double >::type r0(r0SEXP);
    Rcpp::traits::input_parameter< int >::type mc_draws(mc_drawsSEXP);
    rcpp_result_gen = Rcpp::wrap(probit_reg(y, X, b, B, burnin, run, r0, mc_draws));
    return rcpp_result_gen;
END_RCPP
}
// rpg
SEXP rpg(SEXP b, SEXP c);
RcppExport SEXP scalableDA_rpg(SEXP bSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type b(bSEXP);
    Rcpp::traits::input_parameter< SEXP >::type c(cSEXP);
    rcpp_result_gen = Rcpp::wrap(rpg(b, c));
    return rcpp_result_gen;
END_RCPP
}
