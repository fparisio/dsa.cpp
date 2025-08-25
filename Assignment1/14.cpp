// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <algorithm>
#include <iostream>
#include <vector>

#include "patterns.h"  // NOLINT(build/include_subdir)

void printSolidRhombus(int user_input) {
  std::cout << "Solid Rhombus:" << std::endl;
  // Loop for each row
  for (int i = 1; i <= user_input; ++i) {
    // Print the leading spaces to create the slant.
    // Row 1 has (n-1) spaces, Row 2 has (n-2), ..., Row n has 0.
    for (int j = 1; j <= user_input - i; ++j) {
      std::cout << " ";
    }

    // Print a solid line of stars for each row.
    for (int j = 1; j <= user_input; ++j) {
      std::cout << "*";
    }

    std::cout << std::endl;
  }
}

void printHollowRhombus(int user_input) {
  std::cout << "\nHollow Rhombus:" << std::endl;
  // Loop for each row
  for (int i = 1; i <= user_input; ++i) {
    // Print the leading spaces (same logic as the solid rhombus).
    for (int j = 1; j <= user_input - i; ++j) {
      std::cout << " ";
    }

    // Check if it's the first or the last row.
    if (i == 1 || i == user_input) {
      // Print a solid line of stars for the top and bottom borders.
      for (int j = 1; j <= user_input; ++j) {
        std::cout << "*";
      }
    } else {
      // For the middle rows, print a star, then spaces, then another star.
      std::cout << "*";
      for (int j = 1; j <= user_input - 2; ++j) {
        std::cout << " ";
      }
      std::cout << "*";
    }

    std::cout << std::endl;
  }
}

void DoubleRombus::userInput() {
  std::cout << "Enter the rhombus size (e.g., 4): " << std::endl;
  std::cin >> user_input;
}

void DoubleRombus::printPattern() {
  printSolidRhombus(user_input);
  printHollowRhombus(user_input);
}
