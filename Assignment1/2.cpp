// Copyright 2025 Francesco Parisio
// Star Pattern Implementation
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void StarPattern::printPattern() {
  for (int i = 0; i < user_input; i++) {
    for (int j = 0; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}
