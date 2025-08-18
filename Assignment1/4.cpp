// Copyright 2025 Francesco Parisio

// Pattern printing
#include <iostream>
#include <vector>

void printLine(std::vector<int> &toprint) {
  // Print the current line of the pattern
  for (auto it = toprint.begin(); it != toprint.end(); ++it)
    std::cout << *it << " ";
  std::cout << std::endl;
}

void printPattern(std::vector<int> toprint) {
  // Print the pattern in reverse order
  while (toprint.begin() < toprint.end()) {
    printLine(toprint);
    toprint.pop_back();
  }
}

int getNum() {
  // Get an integer from user input
  int num;
  std::cout << "Type an integer: " << std::endl;
  std::cin >> num;
  return num;
}

std::vector<int> assembleVector(int num) {
  // Assemble a vector with integers from 1 to num
  std::vector<int> v1;
  for (int i = 1; i <= num; i++) {
    v1.push_back(i);
  }
  return v1;
}

int main() {
  printPattern(assembleVector(getNum()));
  return 0;
}
