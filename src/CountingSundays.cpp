#include "CountingSundays.hpp"
#include <iostream>
#include <vector>

int CheckLeapYear(int year)
{
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

void CountingSundays()
{
  // 1st Dec 1899 is a Friday.
  auto days = 5;
  auto counter = 0;
  // months arranged as months of previous month
  std::vector<int> months = {31, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
  for (auto year = 1900; year < 2001; ++year) {
    for (auto month = 0; month < 12; ++month) {
      auto m_days = months[month];
      if (month == 2) m_days += CheckLeapYear(year);
      days = (days + m_days) % 7;
      if (days == 0 && year > 1900) ++counter;
    }
  }
  std::cout << counter << std::endl;
}
