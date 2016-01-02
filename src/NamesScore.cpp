#include "NamesScore.hpp"
#include <boost/algorithm/string.hpp>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

void NamesScore()
{
  auto result = 0;
  std::string data;
  std::vector<std::string> names;
  std::ifstream file;
  file.open("txt/p022_names.txt");
  file >> data;
  file.close();
  boost::algorithm::erase_all(data, "\"");
  boost::algorithm::split(names, data, boost::is_any_of(","));
  std::sort(begin(names), end(names));
  std::vector<int> name_values(names.size(), 0);
  auto it_val = begin(name_values);
  for (auto i : names) {
    for (auto c : i) *it_val += c - 'A' + 1;
    it_val++;
  }
  for (auto i = 0u; i < name_values.size(); ++i) {
    result += (i + 1) * name_values[i];
  }
  std::cout << result;
}
