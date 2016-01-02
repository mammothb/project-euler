#ifndef SMALLEST_MULTIPLE_HPP_
#define SMALLEST_MULTIPLE_HPP_
#include <cmath>
#include <iostream>
#include <vector>

template <typename T>
T GetGreatestCommonDivisor(
    T first
  , T second)
{
  while (second > 0) {
    first %= second;
    if (!first) return second;
    second %= first;
  }
  return first;
}

int GetLowestCommonMultiple(
    int first
  , int second);

void SmallestMultiple();
#endif  // SMALLEST_MULTIPLE_HPP_
