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
  void userInput();                 // Declaration only
  virtual void printPattern() = 0;  // Pure virtual
  void execute();                   // Declaration only
};

// Derived classes - declarations only
class StarPattern : public PatternBase {
 public:
  void printPattern() override;  // Declaration only
};

class NumberPattern : public PatternBase {
 private:
  std::vector<int> assembled_vector;
  void assembleVector();  // Declaration only

 public:
  void printPattern() override;  // Declaration only
};

class DiamondPattern : public PatternBase {
 public:
  void printPattern() override;  // Declaration only
};

#endif  // ASSIGNMENT1_PATTERNS_H_
