/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file integer_division_and_reminder.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  *        the integer division d and the remainder r of a divided by b.
  *        By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include <iostream>

// This function shows the user information about the operation of the program
void StartingName() {
  std::cout << "This program calculates given two whole numbers consecutively";
  std::cout << " the quotient and the remainder of the integer division." << std::endl;
}

// This funciton verificate the divider number
void VerificationDivider(int num_divider) {
  if (num_divider == 0) {
    std::cout << "Enter a valid divider!" << std::endl;
    exit(EXIT_SUCCESS);
  }
}

// This function calculates the quotient and the remainder of the division
void CalculationQuotientRemainder (int num_dividend, int num_divider) {
  int quotient = (num_dividend / num_divider);
  int remainder = (num_dividend % num_divider);
  std::cout << quotient << " " << remainder << std::endl;
}

int main() {
  StartingName();
  int num_dividend;
  int num_divider;
  std::cin >> num_dividend >> num_divider;
  VerificationDivider(num_divider);
  CalculationQuotientRemainder(num_dividend, num_divider);
  return 0;
}