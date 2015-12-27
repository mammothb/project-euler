#include "LexicographicPermutation.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

uint64_t Factorial(
    int n)
{
  if (n < 0) return 0;
  uint64_t ans = 1;
  for (auto i = 1; i <= n; ++i) ans *= i;
  return ans;
}

void LexicographicPermutation()
{
  std::vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> perm_digits;
  auto remain = 1000000 - 1;
  auto len = digits.size();
  for (auto i = 1u; i < len; ++i) {
    auto fac = Factorial(len - i);
    auto j = static_cast<int>(remain / fac);
    remain %= fac;
    perm_digits.push_back(digits[j]);
    digits.erase(begin(digits) + j);
    if (remain == 0) break;
  }
  for (auto d : digits) perm_digits.push_back(d);
  for (auto i : perm_digits) std::cout << i;
}
