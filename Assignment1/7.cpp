// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void TrianglePatternBinary::printPattern() {
  for (int i = 0; i < user_input; i++) {
    for (int j = 0; j <= i; j++) {
      if ((i + j) % 2 == 0)
        std::cout << "1";
      else
        std::cout << "0";
    }
    std::cout << std::endl;
  }
}
