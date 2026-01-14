#pragma once
#include <string>
struct Volume {
  std::string_view pairName {"ticker"};
  double amount {0};
};
