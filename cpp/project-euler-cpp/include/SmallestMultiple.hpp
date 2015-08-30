#ifndef SMALLEST_MULTIPLE
#define SMALLEST_MULTIPLE
#include <cmath>
#include <iostream>
#include <vector>

template <typename T>
T GetGreatestCommonDivisor(T first, T second)
{
  while (second > 0) {
    first %= second;
    if (!first) return second;
    second %= first;
  }
  return first;
}

int GetLowestCommonMultiple(int first, int second);

void SmallestMultiple();
#endif  // SMALLEST_MULTIPLE
