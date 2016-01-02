#ifndef LARGEST_PRODUCT_IN_A_SERIES_HPP_
#define LARGEST_PRODUCT_IN_A_SERIES_HPP_

#include <cstdint>
#include <vector>

bool ContainsZero(
    std::vector<int>::iterator it
  , std::size_t length);

uint64_t GetProduct(
    std::vector<int>::iterator it
  , std::size_t length);

void LargestProductInASeries();
#endif  // LARGEST_PRODUCT_IN_A_SERIES_HPP_
