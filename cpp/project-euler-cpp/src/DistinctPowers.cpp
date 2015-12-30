#include "DistinctPowers.hpp"

#include <algorithm>
#include <cmath>
#include <iostream>
#include <set>
#include <vector>

void DistinctPowers()
{
  uint64_t lower_lim = 2;
  uint64_t upper_lim = 100;

  std::set<int> powers;
  std::vector<int> a(20, 0);
  std::vector<bool> avail(upper_lim + 5, false);

  uint64_t ans = 0;
  auto power = static_cast<int>(log(upper_lim) / log(lower_lim));

  for (auto i = 1; i <= power; ++i) {
    auto j = lower_lim;
    while (j <= upper_lim) {
      powers.insert(i * j);
      ++j;
    }
    a[i] = powers.size();
  }

  for (uint64_t i = lower_lim; i < upper_lim + 1; ++i) {
    if (!avail[i]) {
      power = 1;
      for (uint64_t j = i * i; j <= upper_lim; j *=i) {
        avail[j] = true;
        ++power;
      }
      ans += a[power];
    }
  }

  std::cout << ans << std::endl;
}
