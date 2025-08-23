// Copyright 2025 Francesco Parisio
// Diamond Pattern Implementation
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void FullDiamondPattern::printPattern() {
  // Top half
  for (int i = 0; i < user_input; i++) {
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

  // Bottom half
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
