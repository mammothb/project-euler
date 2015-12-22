#include "TenThousandFirstPrime.hpp"
#include "LargestPrimeFactor.hpp"
#include <vector>

int PrimeSieve(
    int position
  , int top_limit)
{
  // Sieve of Eratosthenes
  auto counter = 0;
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
  for (auto i = 0; i < top_limit + 1; ++i) {
    if (numbers[i]) ++counter;
    if (counter == position) return i;
  }  // i
  return 0;
}

void TenThousandFirstPrime()
{
  auto number = PrimeSieve(10001, 125000);
  std::cout << number << std::endl;
}
