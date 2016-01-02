#include "SmallestMultiple.hpp"

#include <iostream>
#include <numeric>
#include <vector>

int GetLowestCommonMultiple(
    int first
  , int second)
{
  // either divide by gcd first or use long long because large number
  return first / GetGreatestCommonDivisor(first, second) * second;
}

void SmallestMultiple()
{
  std::vector<int> factors;
  for (auto i = 11; i < 21; ++i) factors.push_back(i);
  auto a = std::accumulate(begin(factors), end(factors), 2520,
      GetLowestCommonMultiple);
  std::cout << a << std::endl;
}
