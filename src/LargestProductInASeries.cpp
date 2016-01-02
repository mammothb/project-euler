#include "LargestProductInASeries.hpp"

#include <cstdint>
#include <iostream>
#include <string>
#include <vector>

bool ContainsZero(std::vector<int>::iterator it
  , std::size_t length)
{
  for (auto i = 0u; i < length; ++i) {
    if (*(it + i) == 0) return true;
  }
  return false;
}

uint64_t GetProduct(std::vector<int>::iterator it
  , std::size_t length)
{
  uint64_t ans = 1;
  for (auto i = 0u; i < length; ++i) ans *= *(it + i);
  return ans;
}

void LargestProductInASeries()
{
  // use 64 bit unsigned int because huge product
  uint64_t biggest = 0;
  auto length = 13;
  std::string number = "7316717653133062491922511967442657474235534919493496983"
      "520312774506326239578318016984801869478851843858615607891129494954595017"
      "379583319528532088055111254069874715852386305071569329096329522744304355"
      "766896648950445244523161731856403098711121722383113622298934233803081353"
      "362766142828064444866452387493035890729629049156044077239071381051585930"
      "796086670172427121883998797908792274921901699720888093776657273330010533"
      "678812202354218097512545405947522435258490771167055601360483958644670632"
      "441572215539753697817977846174064955149290862569321978468622482839722413"
      "756570560574902614079729686524145351004748216637048440319989000889524345"
      "065854122758866688116427171479924442928230863465674813919123162824586178"
      "664583591245665294765456828489128831426076900422421902267105562632111110"
      "937054421750694165896040807198403850962455444362981230987879927244284909"
      "188845801561660979191338754992005240636899125607176060588611646710940507"
      "754100225698315520005593572972571636269561882670428252483600823257530420"
      "752963450";
  std::vector<int> digits;
  for (auto i : number) digits.push_back(i - '0');
  for (auto i = begin(digits); i != end(digits) - (length - 1); ++i) {
    if (!ContainsZero(i, length)) {
      uint64_t temp = GetProduct(i, length);
      if (biggest < temp) biggest = temp;
    }
  }  // i
  std::cout << biggest << std::endl;
}
