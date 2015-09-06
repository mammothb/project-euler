#ifndef LEXICOGRAPHIC_PERMUTATION_HPP_
#define LEXICOGRAPHIC_PERMUTATION_HPP_

#include <vector>

void SwapPosition(std::vector<int> &digits
  , int a
  , int b);

void ReversePosition(std::vector<int> &digits
  , int a);

bool GetNextPermutation(std::vector<int> &digits);

void LexicographicPermutation();

#endif // LEXICOGRAPHIC_PERMUTATION_HPP_
