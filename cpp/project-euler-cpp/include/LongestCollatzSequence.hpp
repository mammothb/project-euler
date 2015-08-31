#ifndef LONGEST_COLLATZ_SEQUENCE_HPP_
#define LONGEST_COLLATZ_SEQUENCE_HPP_
#include <cstdint>
#include <vector>

int Collatz(uint64_t n
  , int counter
  , std::vector<int> &tracker);

void LongestCollatzSequence();
#endif // LONGEST_COLLATZ_SEQUENCE_HPP_
