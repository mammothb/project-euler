#include "SummationOfPrimes.hpp"
#include <iostream>
#include <vector>

std::vector<bool> PrimeSieve(
    int top_limit)
{
  // Sieve of Eratosthenes
  // so index matches number
  std::vector<bool> numbers(top_limit + 1, true);
  // set 0 and 1 to not prime
  numbers[0] = false;
  numbers[1] = false;
  for (auto i = 2; i < top_limit + 1; ++i) {
    if (numbers[i]) {
      for (auto j = 2; j * i <= top_limit + 1; ++j) numbers[j * i] = false;
    }
  }  // i
  return numbers;
}

void SummationOfPrimes()
{
  auto top_limit = 2e6;
  auto primes = PrimeSieve(top_limit);
  unsigned long long ans = 0;
  for (auto i = 2; i < top_limit + 1; ++i) {
    if (primes[i]) ans += i;
  }  // i
  std::cout << ans << std::endl;
}
