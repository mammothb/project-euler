#include "LargestPalindromeProduct.hpp"
#include <iostream>
#include <vector>

bool CheckPalindrome(int number)
{
  std::vector<int> digits;
  while (number > 9) {
    digits.push_back(number % 10);
    number /= 10;
  }
  digits.push_back(number);
  auto length = digits.size() - 1;
  for (auto i = 0u; i < length / 2 + 1; ++i) {
    if (digits[i] != digits[length - i]) return false;
  }
  return true;
}

void LargestPalindromeProduct()
{
  auto max_val = 0;
  for (auto first = 999; first > 99; --first) {
    for (auto second = 999; second > first - 1; --second) {
      auto number = first * second;
      if (CheckPalindrome(number) && number > max_val) max_val = number;
    }  // second
  }  // first
  std::cout << max_val << std::endl;
}
