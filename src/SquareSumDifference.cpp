#include "SquareSumDifference.hpp"
#include <iostream>

void SquareSumDifference()
{
  auto sum = 0;
  auto sqr_sum = 0;
  for (auto i = 1; i < 101; ++i) {
    sum += i;
    sqr_sum += i * i;
  }  // i
  std::cout << sum * sum - sqr_sum << std::endl;
}
