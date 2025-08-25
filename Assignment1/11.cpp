// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void Butterfly::printPattern() {
  // --- Top Half (pattern widens) ---
  for (int i = 1; i <= user_input; ++i) {
    // Print left stars
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    // Print middle spaces
    // The total width is 2 * user_input + 2
    // So spaces = total_width - (2 * i)
    for (int j = 1; j <= (2 * user_input + 2) - (2 * i); ++j) {
      std::cout << " ";
    }

    // Print right stars
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }

  // --- Solid Middle Line ---
  for (int i = 1; i <= 2 * user_input + 2; ++i) {
    std::cout << "*";
  }
  std::cout << std::endl;

  // --- Lower Half (pattern narrows) ---
  for (int i = user_input; i >= 1; --i) {
    // Print left stars
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    // Print middle spaces
    for (int j = 1; j <= (2 * user_input + 2) - (2 * i); ++j) {
      std::cout << " ";
    }

    // Print right stars
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }
}
