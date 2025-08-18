// Copyright 2025 Francesco Parisio

// Pattern printing 1
#include <iostream>

void printPattern1(double num) {
  for (int i = 0; i < num; i++) {
    for (int j = 0; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
}

int getNum() {
  int num;
  std::cout << "Type an integer: " << std::endl;
  std::cin >> num;
  return num;
}

int main() {
  printPattern1(getNum());
  return 0;
}
