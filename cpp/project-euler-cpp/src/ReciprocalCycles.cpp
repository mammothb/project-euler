#include "ReciprocalCycles.hpp"
#include <iostream>
#include <vector>

int RecurringDigits(int number)
{
  auto value = 1;
  auto counter = 0;
  auto position = 0;
  std::vector<int> remainders(number, 0);
  while(remainders[value] == 0 && value != 0) {
    remainders[value] = position++;
    value = (10 * value) % number;
  }
  return value == 0 ? value : position - remainders[value];
}

void ReciprocalCycles()
{
  auto length = 0;
  auto number = 0;
  for (auto n = 1; n < 1000; ++n) {
    auto temp = RecurringDigits(n);
    if (temp > length) {
      length = temp;
      number = n;
    }
  }
  std::cout << number << std::endl;
}
