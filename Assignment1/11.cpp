// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void Butterfly::printPattern() {
  for (int i = 1; i <= user_input; ++i) {
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    for (int j = 1; j <= (2 * user_input + 2) - (2 * i); ++j) {
      std::cout << " ";
    }

    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }

  for (int i = 1; i <= 2 * user_input + 2; ++i) {
    std::cout << "*";
  }
  std::cout << std::endl;

  for (int i = user_input; i >= 1; --i) {
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    for (int j = 1; j <= (2 * user_input + 2) - (2 * i); ++j) {
      std::cout << " ";
    }

    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }
}
