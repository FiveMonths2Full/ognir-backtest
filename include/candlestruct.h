#pragma once
#include "volumestruct.h"

struct Candle {
  long double unix{0.0};
  std::string_view timestamp {"1/1/1000"};
  double open {0.0};
  double high {0.0};
  double low {0.0};
  double close {0.0};
  Volume firstPair {"first", 0.0};
  Volume secondPair {"second", 0.0};
};

