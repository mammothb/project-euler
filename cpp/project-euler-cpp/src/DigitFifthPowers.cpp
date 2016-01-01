#include "DigitFifthPowers.hpp"

#include <iostream>
#include <vector>

void DigitFifthPowers()
{
  auto nums = 10;
  auto min_power = 3;
  auto max_power = 6;

  std::vector<int> sum(max_power - min_power + 1, 0);
  std::vector<int> powers((max_power - min_power + 1) * nums, 0);
  for (auto p = min_power; p <= max_power; ++p) {
    for (auto i = 0; i < nums; ++i) {
      auto ind = (p - min_power) * nums + i;
      powers[ind] = i;
      for (auto j = 1; j < p; ++j) powers[ind] *= i;
    }  // i
  }  // p
  for (auto p = min_power; p <= max_power; ++p) {
    auto p_ind = p - min_power;
    auto ind = p_ind * nums;
    auto upper_lim = powers[ind + 9] * (p - 1);
    for (auto n = 10; n < upper_lim; ++n) {
      auto number = n;
      auto digit_sum = 0;
      while (number > 0) {
        digit_sum += powers[ind + number % 10];
        number /= 10;
      }
      if (n == digit_sum) sum[p_ind] += n;
    }  // n
  }  // p
  std::cout << sum[2] << std::endl;
}
