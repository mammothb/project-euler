#include "FactorialDigitSum.hpp"
#include <iostream>
#include <vector>
#include "LargestPrimeFactor.hpp"

void Multiply(std::vector<int> &digits, int factor) {
  auto carry = 0;
  for (auto &digit : digits) {
    carry += digit * factor;
    digit = carry % 10;
    carry /= 10;
  }  // digit
}

void FactorialDigitSum() {
  auto limit = 100;
  auto digit_sum = 0;
  std::vector<int> digits(256, 0);
  digits[0] = 1;
  for (int i = 2; i < limit; ++i) Multiply(digits, i);
  for (auto digit : digits) digit_sum += digit;
  std::cout << digit_sum;
}
