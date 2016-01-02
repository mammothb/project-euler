#include "NumbersToWords.hpp"

#include <iostream>
#include <string>
#include <vector>

void GetWord(
    uint64_t n
  , std::vector<std::string> &words)
{
  std::vector<std::string> u_twenty = {"", "One", "Two", "Three", "Four",
      "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
      "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen",
      "Nineteen", "Twenty"};
  std::vector<std::string> tens = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
      "Sixty", "Seventy", "Eighty", "Ninety"};
  auto hundred = "Hundred";
  auto thousand = "Thousand";
  auto million = "Million";
  auto billion = "Billion";
  auto trillion = "Trillion";

  if (n < 21) {
    words.push_back(u_twenty[n]);
  }
  else if (n < 100) {
    words.push_back(tens[n / 10]);
    GetWord(n % 10, words);
  }
  else if (n < 1000) {
    GetWord(n / 100, words);
    words.push_back(hundred);
    GetWord(n % 100, words);
  }
  else if (n < 1e6) {
    GetWord(n / 1000, words);
    words.push_back(thousand);
    GetWord(n % 1000, words);
  }
  else if (n < 1e9) {
    uint64_t denom = 1e6;
    GetWord(n / denom, words);
    words.push_back(million);
    GetWord(n % denom, words);
  }
  else if (n < 1e12) {
    uint64_t denom = 1e9;
    GetWord(n / denom, words);
    words.push_back(billion);
    GetWord(n % denom, words);
  }
  else {
    uint64_t denom = 1e12;
    GetWord(n / denom, words);
    words.push_back(trillion);
    GetWord(n % denom, words);
  }
}

void NumbersToWords()
{
  uint64_t number = 111111111;

  std::vector<std::string> words;
  GetWord(number, words);
  std::cout << words[0];
  for (auto i = 1u; i < words.size(); ++i) {
    if (words[i] != "") std::cout << " " << words[i];
  }
  std::cout << std::endl;
}
