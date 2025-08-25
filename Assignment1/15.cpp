// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void NumberedDiamond::printPattern() {
  int n = (user_input + 1) / 2;

  for (int i = 1; i <= n; ++i) {
    for (int k = 1; k <= n - i; ++k) {
      std::cout << " ";
    }

    for (int j = i; j >= 1; --j) {
      std::cout << j;
    }

    for (int j = 2; j <= i; ++j) {
      std::cout << j;
    }

    std::cout << std::endl;
  }

  for (int i = n - 1; i >= 1; --i) {
    for (int k = 1; k <= n - i; ++k) {
      std::cout << " ";
    }

    for (int j = i; j >= 1; --j) {
      std::cout << j;
    }
    for (int j = 2; j <= i; ++j) {
      std::cout << j;
    }

    std::cout << std::endl;
  }
}
