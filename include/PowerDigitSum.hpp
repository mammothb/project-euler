#ifndef POWER_DIGIT_SUM_HPP_
#define POWER_DIGIT_SUM_HPP_

template <typename T, typename U>
T LargePower(
    T number
  , U power)
{
  if (power == 0) return 1;
  if (power == 1) return number;
  if (power % 2) return LargePower(number * number, power / 2) * number;
  return LargePower(number * number, power / 2);
}

void PowerDigitSum();

#endif // POWER_DIGIT_SUM_HPP_
