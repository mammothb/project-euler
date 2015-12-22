#ifndef LARGEST_PALINDROME_PRODUCT_HPP_
#define LARGEST_PALINDROME_PRODUCT_HPP_

template <typename T>
bool CheckPalindrome(
    T number)
{
  T reverse_num = 0;
  auto temp = number;
  while (temp > 0) {
    reverse_num = reverse_num * 10 + temp % 10;
    temp /= 10;
  }
  return number == reverse_num;
}

void LargestPalindromeProduct();

#endif  // LARGEST_PALINDROME_PRODUCT_HPP_

