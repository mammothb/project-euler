#include "PandigitalProducts.hpp"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

bool CheckPandigital(
    int n)
{
  auto digits = 0;
  auto counter = 0;

  while (n > 0) {
    auto temp = digits;
    digits |= 1 << (n % 10 - 1);
    // Check if there is repeated digits or zero
    if (temp == digits) return false;
    ++counter;
    n /= 10;
  }
  // Check if digits from 1 to n are used
  return digits == (1 << counter) - 1;
}

void PandigitalProducts()
{
  std::vector<int> sums(10, 0);
  std::vector<std::vector<int>> products(10, std::vector<int>());
  auto m_lim = 100u;
  for (auto m = 2u; m < m_lim; ++m) {
    auto n_end = 10000 / m + 1;
    for (auto n = 2u; n < n_end; ++n) {
      auto product = m * n;
      auto identity = ConcatenateNumbers(ConcatenateNumbers(product, m), n);
      auto length = GetNumberLength(identity);

      if (length >= 4 && length <= 9 && CheckPandigital(identity)) {
        auto is_unique_product = std::find(begin(products[length]),
            end(products[length]), product) == end(products[length]);
        if (is_unique_product) products[length].push_back(product);
      }
    }
  }
  for (auto i = 4; i <= 9; ++i) {
    for (auto p : products[i]) sums[i] += p;
  }
  std::cout << sums[4] << std::endl;
  std::cout << sums[5] << std::endl;
  std::cout << sums[9] << std::endl;
}
