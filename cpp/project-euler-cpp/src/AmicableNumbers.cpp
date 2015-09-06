#include "AmicableNumbers.hpp"
#include <cmath>
#include <iostream>
#include <vector>

int DivisorSum(int number)
{
  auto result = 1;
  for (auto i = 2; i < 1 + static_cast<int>(sqrt(number)); ++i) {
    if (number % i == 0) {
      result += i;
      auto quotient = number / i;
      if (i != quotient) result += quotient;
    }
  }  // i
  return result;
}

void AmicableNumbers()
{
  auto ans = 0;
  for (auto i = 2; i < 10000; ++i) {
    auto d_sum = DivisorSum(i);
    if (i != d_sum && i == DivisorSum(d_sum)) {
      ans += i + (d_sum > 9999) ? d_sum : 0;
    }
  }  // i
  std::cout << ans << std::endl;
}
