#ifndef LARGEST_PRIME_FACTOR
#define LARGEST_PRIME_FACTOR
#include <cmath>
#include <iostream>

template <typename T>
bool CheckPrime(T number)
{
  for (auto i = 2; i < sqrt(number) + 1; ++i) {
    if (number % i == 0) return false;
  }  // i
  return true;
}

template <typename T>
T GetFactor(T number)
{
  for (auto i = 2; i < sqrt(number) + 1; ++i) {
    if (number % i == 0) return number / i;
  }
  return 1;
}

template <typename T>
T FindPrimeFactor(T number)
{
  return CheckPrime(number) ? number : FindPrimeFactor(GetFactor(number));
}

void LargestPrimeFactor();
#endif  // LARGEST_PRIME_FACTOR
