#include "AmicableNumbers.hpp"

#include <cmath>
#include <iostream>
#include <vector>

void AmicableNumbers()
{
  auto ans = 0;
  int upper_lim = 1e5;
  auto div_sum_lim = upper_lim * 10;
  std::vector<int> div_sum(div_sum_lim, 1);
  // Generates divisor sums using sieve
  for (auto i = 2; i < div_sum_lim / 2 + 1; ++i) {
    for (auto j = i; j < div_sum_lim; j += i) {
      if (j != i) div_sum[j] += i;
    }  // j
  }  // i
  for (auto i = 1; i < upper_lim; ++i) {
    if (div_sum[div_sum[i]] == i && div_sum[i] != i) ans += i;
  }  // i
  std::cout << ans << std::endl;
}
