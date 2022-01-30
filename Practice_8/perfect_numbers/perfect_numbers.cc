/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file perfect_numbers.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 22 2021
  * @brief This program reads a natural number and show it is perfecto or no.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34091_en/statement
  */

#include <iostream>
#include <vector>
#include <cmath>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "This program reads a natural number and show it is perfecto or no." << std::endl;
}

bool IsPerfect(const std::vector<int>& AllDivisors, const int& kNewNumEntered) {
  int perfect_number{0};
  for (size_t i{0}, long_of_vector = AllDivisors.size(); i < (long_of_vector - 1); ++i) {
    perfect_number += AllDivisors[i];
  }
  if (perfect_number == kNewNumEntered) {
    return true;
  } else {
    return false;
  }
}

// This function calculates the divisors of numbers entered from 1 to 1000
std::vector<int> CalculateDivisors(const int& kNewNumEntered) {
   std::vector<int> all_divisors;
   for (int divisor{1}; divisor <= kNewNumEntered; ++divisor) {
    if ((kNewNumEntered % divisor) == 0) {
      all_divisors.push_back(divisor);
    }
  }
  return all_divisors;
}

int main() {
  // Preamble();
  int new_num_entered;
  while (std::cin >> new_num_entered) {
    std::vector<int> all_divisors = CalculateDivisors(new_num_entered);
    if (IsPerfect(all_divisors, new_num_entered)) {
      std::cout << "true" << std::endl;
    } else {
      std::cout << "false" << std::endl;
    }
  }
  return 0; 
}