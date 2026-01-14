#pragma once
#include "volumestruct.h"
#include <string>
struct Candle {
  long double unix{0.0};
  std::string timestamp {"1/1/1000"};
  std::string symbol {"BTC/USD"};
  double open {0.0};
  double high {0.0};
  double low {0.0};
  double close {0.0};
  Volume firstpair {"first", 0.0};
  Volume secondpair {"second", 0.0};
};

