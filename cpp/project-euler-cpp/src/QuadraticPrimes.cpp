#include "QuadraticPrimes.hpp"

#include <iostream>

#include "LargestPrimeFactor.hpp"

void QuadraticPrimes()
{
  auto a_max = 0;
  auto b_max = 0;
  auto n_max = 0;
  for (auto a = -999; a < 1000; ++a) {
    // find x based on transformed prime-generating polynomial formula here
    // http://mathworld.wolfram.com/Prime-GeneratingPolynomial.html
    auto x = (a - 1) / -2;
    for (auto b = -999; b < 1000; ++b) {
      if (x * x - x + 41 == b && CheckPrime(b)) {
        auto n = 0;
        while (CheckPrime(PrimePolynomial(n, a, b))) {
          ++n;
        }
        if (n > n_max) {
          a_max = a;
          b_max = b;
          n_max = n;
        }
      }
    }  // b
  }  // a
  std::cout << a_max << " " << b_max << " " << a_max * b_max << std::endl;
}
