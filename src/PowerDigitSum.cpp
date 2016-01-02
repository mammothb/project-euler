#include "PowerDigitSum.hpp"

#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

void PowerDigitSum()
{
  auto result = 0;
  boost::multiprecision::uint1024_t two = 2;
  auto a = LargePower(two, 1000);
  while (a > 9) {
    result += static_cast<int>(a % 10);
    a /= 10;
  }
  std::cout << result + a << std::endl;
}
