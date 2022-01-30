/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file parentheses.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads a sequence made up of only ‘(’ and ‘)’,
  *        tell if the parentheses close correctly..
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P31111
  */

#include <iostream>
#include <cstring>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "The program a sequence made up of only ‘(’ and ‘)’, tell if \
  the parentheses close correctly." << std::endl;
}

// This function calculate the number of parentheses int this form "("
int CalculateParentheses1(const std::string kParenthesesEntered) {
  int num_parenth_1{0};
  char parentheses;
  for (size_t i{0}, lenght_string = kParenthesesEntered.size(); i < lenght_string; ++i) {
    parentheses = (static_cast<char>(kParenthesesEntered[i]));
    if (parentheses == '(') {
      ++num_parenth_1;
    } 
  }
  return num_parenth_1;
}

// This function calculate the number of parentheses int this form ")"
int CalculateParentheses2(const std::string kParenthesesEntered) {
  int num_parenth_2{0};
  char parentheses;
  for (size_t i{0}, lenght_string = kParenthesesEntered.size(); i < lenght_string; ++i) {
    parentheses = (static_cast<char>(kParenthesesEntered[i]));
    if (parentheses == ')') {
      ++num_parenth_2;
    }
  }
  return num_parenth_2;
}

int main() {
  std::string parentheses_entered;
  getline(std::cin, parentheses_entered);
  int num_parentheses_1 = CalculateParentheses1(parentheses_entered);
  int num_parentheses_2 = CalculateParentheses2(parentheses_entered);
  if (((parentheses_entered[0] == ')') || (parentheses_entered.back() == '(')) || (num_parentheses_1 != num_parentheses_2)) {
    std::cout << "no" << std::endl;
  } else {
    std::cout << "yes" << std::endl;
  }
  return 0;
}