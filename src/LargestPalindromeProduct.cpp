#include "LargestPalindromeProduct.hpp"
#include <iostream>
#include <vector>

void LargestPalindromeProduct()
{
  auto max_val = 101100;  // smallest palindrome
  for (auto first = 101; first < 1000; ++first) {
    for (auto second = first + 1; second < 1000; ++second) {
      auto number = first * second;
      if (number > max_val && CheckPalindrome(number)) max_val = number;
    }  // second
  }  // first
  std::cout << max_val << std::endl;
}
