#include <iostream>
#include <fstream>
#include "parse.h"
int main (int argc, char* argv[]) {
  if (argc < 2)
    return 1;
  const char* path {argv[1]};
  std::ifstream file {path};
  if (!file.is_open())
    return 1;

  std::vector<Candle> candleList {parse(file)};
  if (candleList.empty())
    std::cout << "Empty";
  for (auto const& e : candleList) {
    std::cout <<  e.unix << ' ' << e.timestamp << ' ' << e.symbol << e.open << '\n';
  }

  return 0;
}
