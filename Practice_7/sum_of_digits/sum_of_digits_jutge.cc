/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file sum_of_digits.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief  This program reads a natural number n, sum all digits and prints the sum.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P33839
  */

#include <iostream>
#include <vector>
#include <sstream>

// This function shows the user information about the operation of the program
void StartingName() {
  std::cout << "This program reads a natural number n, sum all digits and prints the sum." << std::endl;
}

int SumAllDigits(int numero_entered) {
  int quotient; // Quotient of the division performed to obtain the numbers independently
  int remainder; // Remainder of the division performed to obtain the numbers independently
  std::vector<int> digits; // Vector that stores all the digits of the number
  while (numero_entered > 0 ) {
    remainder = (numero_entered % 10);
    quotient = (numero_entered / 10);
    digits.emplace_back(remainder);
    numero_entered = quotient;
  }
  int total_sum{0};
  for (std::size_t accountant = 0, size_of_vector = digits.size(); size_of_vector != accountant; ++accountant) {
    total_sum = (total_sum + (digits[accountant]));
  }
  return total_sum;
}

int main() {
  StartingName();
  while (true) {
    int new_num_entered; // This variable refers to number entered by user
    std::cin >> new_num_entered;
    if (!std::cin) {
      break;
    }
    int total_sum = SumAllDigits(new_num_entered); // This variable refers to sum of all digits of the number entered
    std::cout << "The sum of the digits of " << new_num_entered << " is " << total_sum << "."<< std::endl;
  }
  return 0;
}