#include "LongestCollatzSequence.hpp"
#include <cstdint>
#include <iostream>
#include <vector>

int Collatz(uint64_t n
  , int counter
  , std::vector<int> &tracker)
{
  if (n == 1) return counter;
  if (n < tracker.size() && tracker[n - 1] > 0) return counter + tracker[n - 1];
  return Collatz(n % 2 ? 3 * n + 1 : n / 2, ++counter, tracker);
}

void LongestCollatzSequence()
{
  auto top_limit = 999999;
  std::vector<int> collatz_count(top_limit, 0);
  std::vector<int> result;
  auto biggest = 0;
  for (auto i = 1; i < top_limit + 1; ++i) {
    collatz_count[i - 1] = Collatz(i, 1, collatz_count);
    if (collatz_count[i - 1] > biggest) {
      biggest = collatz_count[i - 1];
      result.push_back(i);
    }
  }  // i
  std::cout << result[result.size() - 1] << std::endl;
}
