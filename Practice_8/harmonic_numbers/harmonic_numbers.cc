/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads a number n and prints the n-th harmonic number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P59539
  */

#include <iostream>
#include <iomanip>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "The program reads a number n and prints the n-th harmonic number" << std::endl;
}

// This function calculate the harmonic number of a number entered by user
double CalculateHarmonicNumber(const int kNumEntered) {
  double harmonic_number{0};
  for (int i{1}; i <= kNumEntered; ++i) {
    harmonic_number = (harmonic_number + (1 / (static_cast<double>(i)))); 
  }
  return harmonic_number;
}

int main() {
  // Preamble();
  int num_entered;
  std::cin >> num_entered;
  double harmonic_number = CalculateHarmonicNumber(num_entered);
  std::cout << std::setprecision(4) << std::fixed << harmonic_number << std::endl;
  return 0;
}