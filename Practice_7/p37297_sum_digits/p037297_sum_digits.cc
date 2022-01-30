/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file p037297_sum_digits.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 15 2021
  * @brief The program that reads a natural number and prints the sum of their three last digits.
  * @bug No hay errores conocidos
  */

#include <iostream>
#include <vector>

void Preamble() {
  std::cout << "The program that reads a natural number and prints the sum of their three last digits." << std::endl;
}

int SumThreeLastDigits(int number_entered) {
  int quotient; // Quotient of the division performed to obtain the numbers independently
  int remainder; // Remainder of the division performed to obtain the numbers independently
  std::vector<int> digits; // Vector that stores all the digits of the number
  // The accountant variable performs n number of iterations
  const int kNumValor10{10};
  for (int accountant{0}; accountant < 3; ++accountant) {
    remainder = (number_entered % kNumValor10);
    quotient = (number_entered / kNumValor10);
    digits.emplace_back(remainder);
    number_entered = quotient;
  }
  int total_sum{0};
  for (std::size_t accountant = 0, size_of_vector = digits.size(); size_of_vector != accountant; ++accountant) {
    total_sum = (total_sum + (digits[accountant]));
  }
  return total_sum;
}

int main() {
  //Preamble();
  int number_entered;
  std::cin >> number_entered;
  int total_sum = SumThreeLastDigits(number_entered);
  std::cout << total_sum << std::endl;
  return 0;
}