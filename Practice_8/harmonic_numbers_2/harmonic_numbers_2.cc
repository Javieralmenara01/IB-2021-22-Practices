/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file harmonic_numbers_2.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads pairs of numbers n and m with n ≥ m, and for each pair prints
  *        Hn − Hm (H is the harmonic number).
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P58153
  */

#include <iostream>
#include <iomanip>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "The program reads pairs of numbers n and m with n ≥ m, \
  and for each pair prints Hn − Hm." << std::endl;
}

// This function calculate the submtraction of harmonic numbers entered by user
double CalculateHarmonicNum(const int kFirstNumber, const int kSecondNumber) {
  double subtraction_harmonic{0};
  for (int i = (kSecondNumber + 1); i <= kFirstNumber; ++i) {
    subtraction_harmonic += ((1 / static_cast<double> (i))); 
  }
  return subtraction_harmonic;
}

int main() {
  while (true) {
    int first_num_entered, second_num_entered;
    std::cin >> first_num_entered;
    std::cin >> second_num_entered;
    if (first_num_entered < second_num_entered) {
      exit(EXIT_SUCCESS);
    }
    if (!(std::cin)) {
      exit(EXIT_SUCCESS);
    }
    double subtraction_harmonic = CalculateHarmonicNum(first_num_entered, second_num_entered);
    std::cout << std::fixed << std::setprecision(10) << subtraction_harmonic << std::endl;
  }
  return 0;
}