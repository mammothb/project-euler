#include "PythagoreanTriplet.hpp"
#include <iostream>

void PythagoreanTriplet()
{
  auto top_limit = 1000;
  for (auto i = top_limit - 3; i > 0; --i) {
    auto remain = top_limit - i;
    for (auto j = 1; j < remain / 2 + 1; ++j) {
      auto k = remain - j;
      if (j * j + k * k == i * i) std::cout << i * j * k << std::endl;
    }
  }
}
