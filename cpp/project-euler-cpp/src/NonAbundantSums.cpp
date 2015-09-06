#include "NonAbundantSums.hpp"
#include <iostream>
#include <vector>
#include "AmicableNumbers.hpp"

void NonAbundantSums()
{
  auto result = 0;
  std::vector<bool> nums(28124, true);
  std::vector<int> ab_nums;
  for (auto i = 2; i < 28124; ++i) {
    if (i < DivisorSum(i)) ab_nums.push_back(i);
  }
  for (auto i = 0u; i < ab_nums.size(); ++i) {
    for (auto j = i; j < ab_nums.size(); ++j) {
      auto temp = ab_nums[i] + ab_nums[j];
      if (temp < 28124) nums[temp] = false;
    }
  }
  for (auto i = 0; i < nums.size(); ++i) {
    if (nums[i]) result += i;
  }
  std::cout << result << std::endl;
}
