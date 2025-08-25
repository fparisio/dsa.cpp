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
  virtual void userInput(int user_input = 0);
  virtual void printPattern() = 0;
  void execute();
};

// Derived classes - declarations only
class TrianglePattern : public PatternBase {
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

class FullDiamondPattern : public PatternBase {
 public:
  void printPattern() override;
};

class TrianglePatternBinary : public TrianglePattern {
 public:
  void printPattern() override;
};

class UPatternNums : public PatternBase {
 public:
  void userInput(int user_input = 0) override;
  void printPattern() override;
};

class TriangleLetters : public PatternBase {
 public:
  void printPattern() override;
};

class HollowDiamond : public PatternBase {
 public:
  void printPattern() override;
};

class Butterfly : public PatternBase {
 public:
  void printPattern() override;
};

class HollowSquare : public PatternBase {
 public:
  void printPattern() override;
};

class SquareNumbers : public PatternBase {
 public:
  void printPattern() override;
};

class DoubleRombus : public PatternBase {
 public:
  void userInput(int user_input = 0) override;
  void printPattern() override;
};

class NumberedDiamond : public PatternBase {
 public:
  void printPattern() override;
};

#endif  // ASSIGNMENT1_PATTERNS_H_
