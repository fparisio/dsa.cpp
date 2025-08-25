// Copyright 2025 Francesco Parisio
// Triangle Pattern Implementation with 1 and 0
#include <algorithm>
#include <iostream>
#include <vector>

#include "patterns.h"  // NOLINT(build/include_subdir)

void SquareNumbers::printPattern() {
  int size = 2 * user_input - 1;

  for (int row = 0; row < size; ++row) {
    for (int col = 0; col < size; ++col) {
      int dist_top = row;
      int dist_left = col;
      int dist_bottom = (size - 1) - row;
      int dist_right = (size - 1) - col;

      int min_dist = std::min({dist_top, dist_left, dist_bottom, dist_right});

      int value = user_input - min_dist;

      std::cout << value << " ";
    }
    std::cout << std::endl;
  }
}
