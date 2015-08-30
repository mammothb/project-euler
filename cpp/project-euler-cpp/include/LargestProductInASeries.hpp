#ifndef LARGEST_PRODUCT_IN_A_SERIES
#define LARGEST_PRODUCT_IN_A_SERIES
#include <cstdint>
#include <vector>

bool ContainsZero(std::vector<int>::iterator it
  , std::size_t length);

std::uint64_t GetProduct(std::vector<int>::iterator it
  , std::size_t length);

void LargestProductInASeries();
#endif  // LARGEST_PRODUCT_IN_A_SERIES
