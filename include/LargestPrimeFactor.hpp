#ifndef LARGEST_PRIME_FACTOR_HPP_
#define LARGEST_PRIME_FACTOR_HPP_
#include <cmath>
#include <iostream>

template <typename T>
bool CheckPrime(
    T number)
{
  if (number < 0) return false;
  if (number == 2) return true;
  if (number % 2 == 0) return false;
  for (auto i = 3; i < std::sqrt(number) + 1; i += 2) {
    if (number % i == 0) return false;
  }  // i
  return true;
}

template <typename T>
T GetFactor(
    T number)
{
  for (auto i = 2; i < std::sqrt(number) + 1; ++i) {
    if (number % i == 0) return number / i;
  }
  return 1;
}

template <typename T>
T FindPrimeFactor(
    T number)
{
  return CheckPrime(number) ? number : FindPrimeFactor(GetFactor(number));
}

void LargestPrimeFactor();
#endif  // LARGEST_PRIME_FACTOR_HPP_
