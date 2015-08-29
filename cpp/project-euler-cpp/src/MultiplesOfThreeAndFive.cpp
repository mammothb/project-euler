#include "MultiplesOfThreeAndFive.hpp"

void MultiplesOfThreeAndFive()
{
  auto ans = 0;
  for (auto i = 1; i < 1000; ++i) {
    if (!(i % 3 && i % 5)) ans += i;
  }
  std::cout << ans << std::endl;
}
