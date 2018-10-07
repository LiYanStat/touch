// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_strsplit
Rcpp::List rcpp_strsplit(const Rcpp::CharacterVector& x);
RcppExport SEXP _touch_rcpp_strsplit(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_strsplit(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_strcat
Rcpp::CharacterVector rcpp_strcat(const Rcpp::List& x);
RcppExport SEXP _touch_rcpp_strcat(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_strcat(x));
    return rcpp_result_gen;
END_RCPP
}
// cat_dx
std::string cat_dx(const std::vector<std::string>& x);
RcppExport SEXP _touch_cat_dx(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cat_dx(x));
    return rcpp_result_gen;
END_RCPP
}
// cat_dx_pair
std::vector<std::string> cat_dx_pair(const std::vector<std::string>& a, const std::vector<std::string>& b);
RcppExport SEXP _touch_cat_dx_pair(SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type a(aSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(cat_dx_pair(a, b));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_gem_o2m
std::vector<std::string> rcpp_gem_o2m(const std::vector<std::string>& dx, const int& which_map);
RcppExport SEXP _touch_rcpp_gem_o2m(SEXP dxSEXP, SEXP which_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type dx(dxSEXP);
    Rcpp::traits::input_parameter< const int& >::type which_map(which_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_gem_o2m(dx, which_map));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_gem_m2m
std::vector<std::string> rcpp_gem_m2m(const std::vector<std::string>& dx, const int& which_map);
RcppExport SEXP _touch_rcpp_gem_m2m(SEXP dxSEXP, SEXP which_mapSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type dx(dxSEXP);
    Rcpp::traits::input_parameter< const int& >::type which_map(which_mapSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_gem_m2m(dx, which_map));
    return rcpp_result_gen;
END_RCPP
}
// init_gem_f17
void init_gem_f17(const std::vector<std::string>& keys, const std::vector<std::string>& values);
RcppExport SEXP _touch_init_gem_f17(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type values(valuesSEXP);
    init_gem_f17(keys, values);
    return R_NilValue;
END_RCPP
}
// init_gem_b17
void init_gem_b17(const std::vector<std::string>& keys, const std::vector<std::string>& values);
RcppExport SEXP _touch_init_gem_b17(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type values(valuesSEXP);
    init_gem_b17(keys, values);
    return R_NilValue;
END_RCPP
}
// init_gem_rf17
void init_gem_rf17(const std::vector<std::string>& keys, const std::vector<std::string>& values);
RcppExport SEXP _touch_init_gem_rf17(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type values(valuesSEXP);
    init_gem_rf17(keys, values);
    return R_NilValue;
END_RCPP
}
// init_gem_rb17
void init_gem_rb17(const std::vector<std::string>& keys, const std::vector<std::string>& values);
RcppExport SEXP _touch_init_gem_rb17(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type values(valuesSEXP);
    init_gem_rb17(keys, values);
    return R_NilValue;
END_RCPP
}
// init_gem_f18
void init_gem_f18(const std::vector<std::string>& keys, const std::vector<std::string>& values);
RcppExport SEXP _touch_init_gem_f18(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type values(valuesSEXP);
    init_gem_f18(keys, values);
    return R_NilValue;
END_RCPP
}
// init_gem_b18
void init_gem_b18(const std::vector<std::string>& keys, const std::vector<std::string>& values);
RcppExport SEXP _touch_init_gem_b18(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type values(valuesSEXP);
    init_gem_b18(keys, values);
    return R_NilValue;
END_RCPP
}
// init_gem_rf18
void init_gem_rf18(const std::vector<std::string>& keys, const std::vector<std::string>& values);
RcppExport SEXP _touch_init_gem_rf18(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type values(valuesSEXP);
    init_gem_rf18(keys, values);
    return R_NilValue;
END_RCPP
}
// init_gem_rb18
void init_gem_rb18(const std::vector<std::string>& keys, const std::vector<std::string>& values);
RcppExport SEXP _touch_init_gem_rb18(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type values(valuesSEXP);
    init_gem_rb18(keys, values);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_touch_rcpp_strsplit", (DL_FUNC) &_touch_rcpp_strsplit, 1},
    {"_touch_rcpp_strcat", (DL_FUNC) &_touch_rcpp_strcat, 1},
    {"_touch_cat_dx", (DL_FUNC) &_touch_cat_dx, 1},
    {"_touch_cat_dx_pair", (DL_FUNC) &_touch_cat_dx_pair, 2},
    {"_touch_rcpp_gem_o2m", (DL_FUNC) &_touch_rcpp_gem_o2m, 2},
    {"_touch_rcpp_gem_m2m", (DL_FUNC) &_touch_rcpp_gem_m2m, 2},
    {"_touch_init_gem_f17", (DL_FUNC) &_touch_init_gem_f17, 2},
    {"_touch_init_gem_b17", (DL_FUNC) &_touch_init_gem_b17, 2},
    {"_touch_init_gem_rf17", (DL_FUNC) &_touch_init_gem_rf17, 2},
    {"_touch_init_gem_rb17", (DL_FUNC) &_touch_init_gem_rb17, 2},
    {"_touch_init_gem_f18", (DL_FUNC) &_touch_init_gem_f18, 2},
    {"_touch_init_gem_b18", (DL_FUNC) &_touch_init_gem_b18, 2},
    {"_touch_init_gem_rf18", (DL_FUNC) &_touch_init_gem_rf18, 2},
    {"_touch_init_gem_rb18", (DL_FUNC) &_touch_init_gem_rb18, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_touch(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
