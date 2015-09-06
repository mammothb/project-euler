#include "LexicographicPermutation.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

void SwapPosition(std::vector<int> &digits
  , int a
  , int b)
{
  auto temp = digits[a];
  digits[a] = digits[b];
  digits[b] = temp;
}

void ReversePosition(std::vector<int> &digits
  , int a)
{
  auto len = digits.size();
  auto sh_len = len - a;
  std::vector<int> sh_digits(sh_len, 0);
  for (auto i = 0; i < sh_len; ++i) sh_digits[i] = digits[i + a];
  for (auto i = 0; i < sh_len; ++i) digits[i + a] = sh_digits[sh_len - i - 1];
}

bool GetNextPermutation(std::vector<int> &digits)
{
  // algorithm according to https://en.wikipedia.org/wiki/Permutation#Generation
  // _in_lexicographic_order
  auto length = static_cast<int>(digits.size());
  for (auto i = length - 2; i > -1; --i) {
    if (digits[i] < digits[i + 1]) {
      for (auto j = length - 1; j > i; --j) {
        if (digits[j] > digits[i]) {
          SwapPosition(digits, i, j);
          ReversePosition(digits, i + 1);
          return true;
        }
      }
    }
  }
  return false;
}

void LexicographicPermutation()
{
  std::vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto i = 1; i < 1000000 && GetNextPermutation(digits); ++i) {}
  for (auto i : digits) std::cout << i;
}
