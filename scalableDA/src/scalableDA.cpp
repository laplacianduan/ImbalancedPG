#include <R_ext/Utils.h>
#include <exception>
#include <iostream>
#include "RcppArmadillo.h"

#include "C11RNG.hpp"

#include "PolyaGamma.h"
#include "PolyaGammaAlt.h"
#include "PolyaGammaSP.h"
#include "PolyaGammaSmallB.h"
#include "RNG.h"
#include "rpg.hpp"

#include "binomial_reg.hpp"

#include "logistic_reg.hpp"
#include "logistic_reg_random_effect.hpp"

#include "poisson_reg.hpp"
#include "poisson_reg_random_effect.hpp"

#include "probit_px.hpp"
#include "probit_reg.hpp"