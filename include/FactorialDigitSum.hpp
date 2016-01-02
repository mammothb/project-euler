#ifndef FACTORIAL_DIGIT_SUM_HPP_
#define FACTORIAL_DIGIT_SUM_HPP_

#include <vector>

template <typename T>
void Multiply(
    std::vector<T> &digits
  , T factor)
{
  auto carry = 0;
  for (auto &digit : digits) {
    carry += digit * factor;
    digit = carry % 10;
    carry /= 10;
  }  // digit
}

void FactorialDigitSum();
#endif  // FACTORIAL_DIGIT_SUM_HPP_
