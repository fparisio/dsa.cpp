// Copyright 2025 Francesco Parisio
// Number Pattern Implementation
#include <iostream>

#include "patterns.h"  // NOLINT(build/include_subdir)

void NumberPattern::assembleVector() {
  assembled_vector.clear();
  for (int i = 1; i <= user_input; i++) {
    assembled_vector.push_back(i);
  }
}

void NumberPattern::printPattern() {
  assembleVector();
  while (!assembled_vector.empty()) {
    for (int num : assembled_vector) {
      std::cout << num << " ";
    }
    std::cout << std::endl;
    assembled_vector.pop_back();
  }
}
