#ifndef POWER_DIGIT_SUM_HPP_
#define POWER_DIGIT_SUM_HPP_
#include <boost/multiprecision/cpp_int.hpp>

boost::multiprecision::uint1024_t LargePower(
    boost::multiprecision::uint1024_t number
  , int power);

void PowerDigitSum();
#endif // POWER_DIGIT_SUM_HPP_
