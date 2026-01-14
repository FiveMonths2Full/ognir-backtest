#pragma once
#include <string_view>
struct Volume {
  std::string_view pairName {"ticker"};
  double amount {0};
};
