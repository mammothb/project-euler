#include "PowerDigitSum.hpp"
#include <boost/multiprecision/cpp_int.hpp>
#include <iostream>

boost::multiprecision::uint1024_t LargePower(
    boost::multiprecision::uint1024_t number
  , int power)
{
  if (power == 0) return 1;
  if (power == 1) return number;
  if (power % 2) return LargePower(number * number, power / 2) * number;
  return LargePower(number * number, power / 2);
}

void PowerDigitSum()
{
  auto result = 0;
  boost::multiprecision::uint1024_t a = LargePower(2, 1000);
  while (a > 9) {
    result += static_cast<int>(a % 10);
    a /= 10;
  }
  std::cout << result + a << std::endl;
}
