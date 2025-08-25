// Copyright 2025 Francesco Parisio

#include "patterns.h"  // NOLINT(build/include_subdir)

#include <iostream>

void PatternBase::userInput(int user_input) {
  if (user_input == 0) {
    std::cout << "Type an integer: " << std::endl;
    std::cin >> user_input;
  }
  this->user_input = user_input;
}

void PatternBase::execute() { printPattern(); }
