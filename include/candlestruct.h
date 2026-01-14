#pragma once
#include "volumestruct.h"

struct Candle {
  std::string_view timestamp {"1/1/1000"};
  double open {0};
  double high {0};
  double low {0};
  double close {0};
  Volume firstPair {"first", 0};
  Volume secondPair {"second", 0};
};

