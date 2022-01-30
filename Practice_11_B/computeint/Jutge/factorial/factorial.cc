/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief balanced_numbers.cc
 */

#include <iostream>
#include <cmath>

long CalculateFactorial(const long num) {
  long factorial = (4 * num) + round(log10(num) / log10(4));
  while (true) {
    if (factorial % 5 == 0) {
      break;
    } else {
      ++factorial;
    }
  }
  return factorial;
}

int main() {
  long num_entered;
  while (true) {
    std::cin >> num_entered;
    if (!std::cin) {
      exit(EXIT_SUCCESS);
    }
    long result = CalculateFactorial(num_entered);
    std::cout << result << std::endl;
  }
  return 0;
}