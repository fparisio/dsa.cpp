// Copyright 2025 Francesco Parisio

#ifndef ASSIGNMENT1_PATTERNS_H_
#define ASSIGNMENT1_PATTERNS_H_

#include <iostream>
#include <vector>

// Base class
class PatternBase {
 protected:
  int user_input;

 public:
  virtual ~PatternBase() = default;
  void userInput();
  virtual void printPattern() = 0;
  void execute();
};

// Derived classes - declarations only
class StarPattern : public PatternBase {
 public:
  void printPattern() override;
};

class NumberPattern : public PatternBase {
 private:
  std::vector<int> assembled_vector;
  void assembleVector();

 public:
  void printPattern() override;
};

class BottomDiamondPattern : public PatternBase {
 public:
  void printPattern() override;
};

#endif  // ASSIGNMENT1_PATTERNS_H_
