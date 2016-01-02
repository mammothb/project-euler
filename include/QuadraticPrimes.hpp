#ifndef QUADRATIC_PRIMES_HPP_
#define QUADRATIC_PRIMES_HPP_

template <typename T>
T PrimePolynomial(
    T n
  , T a
  , T b)
{
  return n * n + a * n + b;
}

void QuadraticPrimes();

#endif  // QUADRATIC_PRIMES_HPP_
