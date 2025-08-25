// Copyright 2025 Francesco Parisio

#include <iostream>
#include <memory>
#include <vector>
#include <string>
#include <random>

// include the directory when naming the header file
#include "grade_calculator.h"  // NOLINT(build/include_subdir)
#include "patterns.h"          // NOLINT(build/include_subdir)

int main(int argc, char* argv[]) {
  bool auto_mode = false;
  for (int i = 1; i < argc; ++i) {
    if (std::string(argv[i]) == "--auto") {
      auto_mode = true;
    }
  }
  // Ex1: Grade calculator
  averageGradeCalculator();

  // Create a list of all pattern exercises using smart pointers
  std::vector<std::unique_ptr<PatternBase>> exercises;
  exercises.push_back(std::make_unique<TrianglePattern>());        // Ex2
  exercises.push_back(std::make_unique<TrianglePattern>());        // Ex3
  exercises.push_back(std::make_unique<NumberPattern>());          // Ex4
  exercises.push_back(std::make_unique<BottomDiamondPattern>());   // Ex5
  exercises.push_back(std::make_unique<FullDiamondPattern>());     // Ex6
  exercises.push_back(std::make_unique<TrianglePatternBinary>());  // Ex7
  exercises.push_back(std::make_unique<UPatternNums>());           // Ex8
  exercises.push_back(std::make_unique<TriangleLetters>());        // Ex9
  exercises.push_back(std::make_unique<HollowDiamond>());          // Ex10
  exercises.push_back(std::make_unique<Butterfly>());              // Ex11
  exercises.push_back(std::make_unique<HollowSquare>());           // Ex12
  exercises.push_back(std::make_unique<SquareNumbers>());          // Ex13
  exercises.push_back(std::make_unique<DoubleRombus>());           // Ex14
  exercises.push_back(std::make_unique<NumberedDiamond>());        // Ex15

  // Loop through and run each exercise
  if (auto_mode) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 10);

    for (const auto& exercise : exercises) {
      int n = dist(gen);
      exercise->userInput(n);
      exercise->execute();
      std::cout << "-------------------------" << std::endl;
    }
  } else {
    for (const auto& exercise : exercises) {
      exercise->userInput(0);
      exercise->execute();
      std::cout << "-------------------------" << std::endl;
    }
  }

  return 0;
}
