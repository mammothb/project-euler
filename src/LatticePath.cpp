#include "LatticePath.hpp"
#include <iostream>
#include <vector>

void LatticePath()
{
  auto l_size = 21;
  std::vector<uint64_t> lattice(l_size * l_size, 1);
  for (auto n = l_size + 1; n < l_size * l_size; ++n) {
    if (n % l_size) lattice[n] = lattice[n - 1] + lattice[n - l_size];
  }
  std::cout << lattice[lattice.size() - 1] << std::endl;
}
