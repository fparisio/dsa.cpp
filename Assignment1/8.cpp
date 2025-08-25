// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void UPatternNums::userInput() {
  std::cout << "Type an integer (max 2 digits): " << std::endl;
  std::cin >> user_input;
}

void UPatternNums::printPattern() {
  for (int i = 0; i < user_input; i++) {
    // Print left side
    for (int j = 1; j <= i + 1; j++) {
      std::cout << (j % 10);  // Use modulo to get single digit
    }

    if (i < user_input - 1) {
      int spaces = 2 * (user_input - i - 1);
      for (int j = 0; j < spaces; j++) {
        std::cout << " ";
      }
    }

    // Print right side
    for (int j = i + 1; j >= 1; j--) {
      std::cout << (j % 10);
    }

    std::cout << std::endl;
  }
}
