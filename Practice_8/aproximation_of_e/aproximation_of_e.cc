/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file aproximation_of_e.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads a natural number n, prints the approximation of e that we 
  *        get by adding the n first terms of the series above.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11916_en
  */

#include <iostream>
#include <iomanip>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "The program reads a natural number n, prints the approximation of e \
  that we get by adding the n first terms of the series above." << std::endl;
}

// This function calculate the factorial number needed to calculate e aproximation
double CalculationFactorial(const int& kNumIterations) {
  double num_factorial{1};
  for (int i{2}; i <= kNumIterations; ++i) {
    num_factorial *= i;
  }
  return num_factorial;
}

// This function calculate the summation of the aproximation of e number
double CaculateAproximationOfE(const int& kNumIterations) {
  double summation{0}, num_factorial;
  for (int i{0}; i < kNumIterations; ++i) {
    num_factorial = CalculationFactorial(i);
    summation += (1 / num_factorial);
  }
  return summation;
}

int main() {
  int num_iterations;
  while (true) {
    std::cin >> num_iterations;
    if (!std::cin) {
      break;
    }
    double num_approximation = CaculateAproximationOfE(num_iterations);
    std::cout << "With " << num_iterations << " term(s) we get " << std::fixed << std::setprecision(10) 
    << num_approximation << "." << std::endl;
  }
  return 0;
}