#include "patterns.h"

void PatternBase::userInput() {
  std::cout << "Type an integer: " << std::endl;
  std::cin >> user_input;
}

void PatternBase::execute() { printPattern(); }