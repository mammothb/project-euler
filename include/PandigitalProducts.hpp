#ifndef PANDIGITAL_PRODUCTS_HPP_
#define PANDIGITAL_PRODUCTS_HPP_

bool CheckPandigital(
    int n);

template <typename T>
T ConcatenateNumbers(
    T a
  , T b)
{
  T temp = b;
  while (temp > 0) {
    a *= 10;
    temp /= 10;
  }
  return a + b;
}

template <typename T>
T GetNumberLength(
    T n)
{
  T length = 0;
  while (n > 0) {
    n /= 10;
    ++length;
  }
  return length;
}

void PandigitalProducts();

#endif // PANDIGITAL_PRODUCTS_HPP_
