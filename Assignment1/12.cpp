// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void HollowSquare::printPattern() {
  for (int i = 1; i <= user_input; ++i) {
    for (int j = 1; j <= user_input; ++j) {
      if (i == 1 || i == user_input || j == 1 || j == user_input) {
        std::cout << "* ";
      } else {
        std::cout << "  ";
      }
    }
    std::cout << std::endl;
  }
}
