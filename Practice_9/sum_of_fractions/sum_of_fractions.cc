/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file sum_of_fractions.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program reads triples of natural numbers a, b and k, and for each one computes and
  *        prints the result of for all fractions with denominator smaller than or equal to b.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P76024_en
  */

#include <iostream>
#include <vector>
#include <iomanip>

 /*
 * @brief Shows the user how the program works
 * @param array: Whitout parameters
 * @return Non return
 */
void Preamble() {
  std::cout << "The program reads triples of natural numbers a, b and k, and for each one computes and\
  prints the result of for all fractions with denominator smaller than or equal to b." << std::endl;
}

/**
 * @brief Computes the sum of fractions 
 * @param [in] kNumEntered1: First number entered by user
 * @param [in] kNumEntered2: Second number entered by user
 * @param [in] kNumEntered3: Third number entered by user
 * @return  The sum of fractions
 */
double ComputesFractions(const double kNumEntered1, const double kNumEntered2, const double kNumEntered3) {
  double sum_fractions{0}, denominator;
  for (int i{0}; i <= kNumEntered2; ++i) {
    if ((kNumEntered1 + (i * kNumEntered3)) <= kNumEntered2) {
      denominator = (kNumEntered1 + static_cast<double>((i * kNumEntered3)));
      sum_fractions += static_cast<double>((1 / denominator));
    }
  }
  return sum_fractions;
}

/** 
 * Main function
 * @param :Whitout paremeters
 */
int main() {
  // Preamble();
  double num_entered_1, num_entered_2, num_entered_3;
  while (true) {
    std::cin >> num_entered_1 >> num_entered_2 >> num_entered_3;
    if (!std::cin) {
      break;
    }
    double sum_fractions = ComputesFractions(num_entered_1, num_entered_2, num_entered_3);
    std::cout << std::setprecision(4) << std::fixed << sum_fractions << "\n";
  }
  return 0;
}