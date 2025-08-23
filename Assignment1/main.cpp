// Copyright 2025 Francesco Parisio

#include <iostream>
#include <vector>

// include the directory when naming the header file
#include "patterns.h"  // NOLINT(build/include_subdir)

// void exercise_1() {
//   // Ex1: final grade calculation
//   std::vector<double> grades = getGrades({"Math", "Physics", "Chemistry"});

//   // Calculate final grade
//   double percentage_grade = getFinalGrade(grades);
//   char letter_grade = getLetterGrade(percentage_grade);

//   // Print messages
//   printPercentageGrade(percentage_grade);
//   printPassFail(letter_grade);
//   printLetterGrade(letter_grade);
// }

void exercise_2() {
  // Ex2: First pattern
  TrianglePattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_4() {
  // Ex3: Second pattern
  NumberPattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_5() {
  // Ex3: Bottom diamond pattern
  BottomDiamondPattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_6() {
  // Ex3: Full diamond pattern
  FullDiamondPattern pattern;
  pattern.userInput();
  pattern.execute();
}

void exercise_7() {
  // Ex3: Full diamond pattern
  TrianglePatternBinary pattern;
  pattern.userInput();
  pattern.execute();
}

int main() {
  exercise_2();
  exercise_4();
  exercise_5();
  exercise_6();
  exercise_7();

  return 0;
}
