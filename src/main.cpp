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

  return 0;
}
