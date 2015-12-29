#include "NumberSpiralDiagonals.hpp"

#include <iostream>

void NumberSpiralDiagonals()
{
  auto spiral_size = 1001;
  auto n = (spiral_size - 1) / 2;
  auto ans = (16 * n * n * n + 30 * n * n + 26 * n + 3) / 3;
  std::cout << ans << std::endl;
}
