#include "NumberLetterCounts.hpp"
#include <iostream>
#include <vector>

void NumberLetterCounts()
{
  std::vector<int> u_twenty = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7,
      7, 9, 8, 8};
  std::vector<int> tens = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
  auto hundred = 7;
  auto and_ = 3;
  auto ten_b = false;
  auto hundred_b = false;
  auto length = 0;
  for (auto i = 1; i < 1000; ++i) {
    ten_b = false;
    hundred_b = false;
    auto tenths = i % 100;
    auto hundredths = i / 100;
    if (tenths > 0) {
      ten_b = true;
      length += (tenths < 20) ? u_twenty[tenths] : u_twenty[tenths % 10] +
          tens[tenths / 10];
    }
    if (hundredths) {
      hundred_b = true;
      length += u_twenty[hundredths] + hundred;
    }
    if (ten_b && hundred_b) length += and_;
  }  // i
  std::cout << length + 11 << std::endl;
}
