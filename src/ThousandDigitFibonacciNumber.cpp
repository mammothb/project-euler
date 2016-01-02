#include "ThousandDigitFibonacciNumber.hpp"
#include <iostream>
#include <vector>

void ThousandDigitFibonacciNumber()
{
  std::vector<int> n1(1000, 0);
  std::vector<int> n2(1000, 0);
  std::vector<int> temp(1000, 0);
  int carry = 0;
  int counter = 2;
  n1[0] = 1;
  n2[0] = 1;
  while (n2[999] == 0) {
    for (auto n = 0u; n < n1.size(); ++n) {
      carry += n1[n] + n2[n];
      temp[n] = carry % 10;
      carry /= 10;
    }
    n1 = n2;
    n2 = temp;
    ++counter;
  }
  std::cout << counter << std::endl;
}
