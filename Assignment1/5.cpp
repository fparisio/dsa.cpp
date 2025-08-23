// Copyright 2025 Francesco Parisio
// Diamond Pattern Implementation
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void BottomDiamondPattern::printPattern() {
  for (int i = user_input - 1; i >= 1; i--) {
    // Print leading spaces
    for (int j = 0; j < user_input - i; j++) {
      std::cout << " ";
    }
    // Print asterisks
    for (int k = 0; k < 2 * i - 1; k++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}
