#ifndef NON_ABUNDANT_SUMS_HPP_
#define NON_ABUNDANT_SUMS_HPP_

#include <cmath>

template <typename T>
T DivisorSum(
    T number)
{
  auto result = 1;
  for (auto i = 2; i < 1 + static_cast<T>(std::sqrt(number)); ++i) {
    if (number % i ==0) {
      result += i;
      auto quotient = number / i;
      if (i != quotient) result += quotient;
    }
  }  // i
  return result;
}

void NonAbundantSums();

#endif // NON_ABUNDANT_SUMS_HPP_
