#include "MultiplesOfThreeAndFive.hpp"

void MultiplesOfThreeAndFive()
{

  uint64_t number = 1000;
  auto three = (number - 1)/ 3;
  auto five = (number - 1) / 5;
  auto fifteen = (number - 1) / 15;
  auto ans = 3 * UnitSum(three) + 5 * UnitSum(five) - 15 * UnitSum(fifteen);

  std::cout << ans << std::endl;
}
