#include "CoinSums.hpp"

#include <iostream>
#include <vector>

void CoinSums()
{
  uint64_t mod = 1000000007;
  auto amount = 200;
  std::vector<int> coin_sizes = {1, 2, 5, 10, 20, 50, 100, 200};
  std::vector<uint64_t> ways(amount + 1, 0);
  ways[0] = 1;
  for (auto coin : coin_sizes) {
    for (auto j = coin; j <= amount; ++j) {
      ways[j] = (ways[j] + ways[j - coin]) % mod;
    }
  }
  std::cout << ways[amount] << std::endl;
}
