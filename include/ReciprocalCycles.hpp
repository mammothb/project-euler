#ifndef RECIPROCAL_CYCLES_HPP_
#define RECIPROCAL_CYCLES_HPP_

#include <vector>

template <typename T>
T RecurringDigits(
    T number)
{
  auto value = 1;
  auto position = 0;
  std::vector<T> remainders(number, 0);
  while(remainders[value] == 0 && value != 0) {
    remainders[value] = position++;
    value = (10 * value) % number;
  }
  return value == 0 ? value : position - remainders[value];
}

void ReciprocalCycles();

#endif // RECIPROCAL_CYCLES_HPP_
