/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divisors_in_order.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads natural number n between 1 and 10^9, on several occasions
  *        and print the print the divisors of n in increasing order.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39308
  */

#include <iostream>
#include <cmath>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "This program reads natural number n between 1 and 109, on several occasions \
  and print the print the divisors of n in increasing order" << std::endl;
}

// This function show the divisor
void ShowDivisors(const int kDivisor) {
  std::cout << " " << kDivisor;
}

// This function calculates the divisors of numbers entered from 1 to 1000
void CalculateSmallsDivisors(const int kNewNumEntered) {
   for (int divisor{1}; divisor <= kNewNumEntered; ++divisor) {
    if ((kNewNumEntered % divisor) == 0) {
      ShowDivisors(divisor);
    }
  }
} 

// This function calculates the divisors of numbers entered from 1000
void CalculateBigDivisors(const int kNewNumEntered) {
  for (int divisor{1}; divisor < (sqrt(kNewNumEntered)); ++divisor) {
    if ((kNewNumEntered % divisor) == 0) {
      ShowDivisors(divisor);
    }
  } 
  for (int divisor((sqrt(kNewNumEntered))); divisor > 0; --divisor) {
    if ((kNewNumEntered % divisor) == 0) {
      int long_divisor = (kNewNumEntered / divisor);
      ShowDivisors(long_divisor);
    }
  }
}

int main() {
  // Preamble();
  const int maximum_value{1000000000};
  int new_num_entered;
  while ((std::cin >> new_num_entered) && ((new_num_entered < maximum_value) || (new_num_entered > 1))) {
    if (new_num_entered < 1000) {
      std::cout << "divisors of " << new_num_entered << ":";
      CalculateSmallsDivisors(new_num_entered);
      std::cout << std::endl;
    } else {
      std::cout << "divisors of " << new_num_entered << ":";
      CalculateBigDivisors(new_num_entered);
      std::cout << std::endl;
    }
  }
  return 0; 
}