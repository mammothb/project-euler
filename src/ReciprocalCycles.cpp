#include "ReciprocalCycles.hpp"

#include <iostream>

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
  }  // n
  std::cout << number << std::endl;
}
