#include "HighlyDivisibleTriangularNumber.hpp"
#include <cmath>
#include <iostream>

void HighlyDivisibleTriangularNumber()
{
  auto seq = 1;
  auto number = 0;
  auto counter = 2;
  while (counter < 500) {
    counter = 2;
    number += seq;
    ++seq;
    for (auto i = 2; i < static_cast<int>(sqrt(number)) + 1; ++i) {
      if (number % i == 0) {
        counter += (number / i == i) ? 1 : 2;
      }
    }  // i
  }  // counter
  std::cout << number << " " << counter << std::endl;
}
