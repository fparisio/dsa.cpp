// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void HollowDiamond::printPattern() {
  // --- Upper Half (from full width down to the middle) ---
  for (int i = user_input; i >= 1; --i) {
    // Print the left block of stars
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    // Print the middle spaces
    // The number of spaces is 2 * (total_size - current_stars)
    for (int j = 1; j <= 2 * (user_input - i); ++j) {
      std::cout << " ";
    }

    // Print the right block of stars
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    // Move to the next line
    std::cout << std::endl;
  }

  // --- Lower Half (from the middle back to full width) ---
  for (int i = 2; i <= user_input;
       ++i) {  // Start from 2 to avoid repeating the middle line
    // Print the left block of stars
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    // Print the middle spaces
    for (int j = 1; j <= 2 * (user_input - i); ++j) {
      std::cout << " ";
    }

    // Print the right block of stars
    for (int j = 1; j <= i; ++j) {
      std::cout << "*";
    }

    // Move to the next line
    std::cout << std::endl;
  }
}
