#include <iostream>
#include "candlestruct.h"
int main () {
  std::cout << "First line dropped!\n";
  Candle c {"1/2/2000",1,2,3,4,{"first", 1},{"second", 2}};
  std::cout << c.timestamp;
  return 0;
}
