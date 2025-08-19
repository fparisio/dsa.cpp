// Copyright 2025 Francesco Parisio

// Write a program that takes a student's marks in three subjects: Math,
// Physics, and Chemistry. Each subject is graded out of 100. Based on these
// marks, the program should calculate and print the student's final grade as
// a percentage, along with a pass/fail status and a letter grade.
// Passing Criteria:
// A: Final percentage ≥90
// B: 80≤ Final percentage <90
// C: 70≤ Final percentage <80
// D: 60≤ Final percentage <70
// F: Final percentage <60 or if the student has failed a subject.

#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

double getGrade(const std::string& subject) {
  double grade;
  std::cout << "Insert " << subject << " grade: ";
  std::cin >> grade;
  return grade;
}

std::vector<double> getGrades(std::vector<std::string> subjects) {
  std::vector<double> grades;

  for (auto& sub : subjects) {
    grades.push_back(getGrade(sub));
  }

  return grades;
}

double getFinalGrade(std::vector<double>& grades) {
  double final_grade = 0.0;
  for (double& grade : grades) {
    final_grade = final_grade + grade;
  }

  return final_grade / grades.size();
}

char getLetterGrade(double percentage) {
  if (percentage >= 90) {
    return 'A';
  }
  if (percentage >= 80) {
    return 'B';
  }
  if (percentage >= 70) {
    return 'C';
  }
  if (percentage >= 60) {
    return 'D';
  }
  return 'F';
}

void printPassFail(char& grade) {
  if (grade != 'F') {
    std::cout << "Pass" << std::endl;
  } else {
    std::cout << "Fail" << std::endl;
  }
}

void printPercentageGrade(double& grade) {
  std::cout << "Final Percentage: " << std::fixed << std::setprecision(2)
            << grade << "%" << std::endl;
}

void printLetterGrade(char& grade) {
  std::cout << "Letter Grade: " << grade << std::endl;
}