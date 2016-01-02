#include "LongestCollatzSequence.hpp"

#include <cstdint>
#include <iostream>
#include <vector>

std::vector<int> Collatz(
    uint64_t number)
{
  std::vector<int> cache(number, -1);
  cache[1] = 1;
  for (auto i = 2u; i < number; ++i) {
    uint64_t seq = i;
    auto k = 0;
    while (seq != 1 && seq >= i) {
      ++k;
      seq = (seq % 2 == 0) ? seq / 2 : seq * 3 + 1;
    }
    cache[i] = k + cache[seq];
  }  // i
  return cache;
}

void LongestCollatzSequence()
{
  auto top_limit = 999999;
  auto collatz_count = Collatz(top_limit + 1);
  auto biggest = 0;
  auto max_ind = 0;
  for (auto i = 1; i < top_limit + 1; ++i) {
    if (collatz_count[i] >= biggest) {
      biggest = collatz_count[i];
      max_ind = i;
    }
    collatz_count[i] = max_ind;
  }  // i
  std::cout << collatz_count.back() << std::endl;
}
