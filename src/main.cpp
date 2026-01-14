#include <iostream>
#include <
#include "candlestruct.h"
int main (int argc, char* argv[]) {
  if (argc < 2)
    return 1;
  const char* path {argv[1]};
  std::ifstream file {path};
  if (!file.is_open())
    return 1;
  else 
    parse(std::ifstream in);

  std::cout << "First line dropped!\n";
  Candle c {"1/2/2000",1,2,3,4,{"first", 1},{"second", 2}};
  std::cout << c.timestamp;
  return 0;
}
