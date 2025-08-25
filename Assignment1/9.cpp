// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void TriangleLetters::printPattern() {
  if (user_input < 1 || user_input > 26) {
    std::cout << "Input must be between 1 and 26" << std::endl;
    return;
  }

  for (int i = 0; i < user_input; i++) {
    for (int j = user_input - i - 1; j < user_input; j++) {
      std::cout << (char)('A' + j);
      if (j < user_input - 1) {
        std::cout << " ";
      }
    }

    std::cout << std::endl;
  }
}
