#ifndef MULTIPLES_OF_THREE_AND_FIVE_HPP_
#define MULTIPLES_OF_THREE_AND_FIVE_HPP_
#include<iostream>

template <typename T>
T UnitSum(
    T n)
{
  return n * (n + 1) / 2;
}

void MultiplesOfThreeAndFive();

#endif  // MULTIPLES_OF_THREE_AND_FIVE_HPP_
