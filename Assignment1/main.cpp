// Copyright 2025 Francesco Parisio

#include <iostream>
#include <vector>

// include the directory when naming the header file
#include "grade_calculator.h"  // NOLINT(build/include_subdir)
#include "patterns.h"          // NOLINT(build/include_subdir)

void exercise_1() {
  // Ex1: Grade calculator
  averageGradeCalculator();
}

void exercise_2() {
  // Ex2: Triangle pattern
  TrianglePattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_3() {
  // Ex3: Triangle pattern (repeats Ex2)
  TrianglePattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_4() {
  // Ex4: Second pattern
  NumberPattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_5() {
  // Ex5: Bottom diamond pattern
  BottomDiamondPattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_6() {
  // Ex6: Full diamond pattern
  FullDiamondPattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_7() {
  // Ex7: Triangle pattern with 1 and 0
  TrianglePatternBinary pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_8() {
  // Ex8: U pattern with numbers
  UPatternNums pattern;
  pattern.userInput();
  pattern.execute();
}

int main() {
  exercise_1();
  // exercise_2();
  // exercise_3();
  // exercise_4();
  // exercise_5();
  // exercise_6();
  // exercise_7();
  // exercise_8();

  return 0;
}
