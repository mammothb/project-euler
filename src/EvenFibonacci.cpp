#include "EvenFibonacci.hpp"

#include <iostream>

void EvenFibonacci()
{
  auto first = 1;
  auto second = 2;
  auto fibo = first + second;
  auto ans = 2;
  while (fibo < 4e6) {
    if (fibo % 2 == 0) ans += fibo;
    first = second;
    second = fibo;
    fibo = first + second;
  }  // fibo
  std::cout << ans << std::endl;
}
