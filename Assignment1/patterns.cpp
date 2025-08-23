// Copyright 2025 Francesco Parisio

#include "patterns.h"  // NOLINT(build/include_subdir)

#include <iostream>

void PatternBase::userInput() {
  std::cout << "Type an integer: " << std::endl;
  std::cin >> user_input;
}

void PatternBase::execute() { printPattern(); }
