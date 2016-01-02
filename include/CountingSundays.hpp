#ifndef COUNTING_SUNDAYS_HPP_
#define COUNTING_SUNDAYS_HPP_

template <typename T>
T CheckLeapYear(
    T year)
{
  return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

void CountingSundays();

#endif // COUNTING_SUNDAYS_HPP_
