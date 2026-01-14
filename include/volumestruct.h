#pragma once
#include <string>
struct Volume {
  std::string_view name {"ticker"};
  double volume {0.0};
};
