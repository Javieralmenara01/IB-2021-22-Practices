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

#include <cmath>
#include <iostream>
#include <vector>

bool IsPerfectPrime(int num) {
  while (true) {
    if (num == 1) {
      return false;
    }
    for (int i = num - 1; i >= sqrt(num); --i) {
      if (num % i == 0) {
        return false;
      }
    }
    int remainder{0}, quotient{0}, num_result;
    if (num == num_result) {
      break;
    }
    std::vector<int> numbers_digits;
    while (num > 0 ) {
      remainder = (num % 10);
      quotient = (num/ 10);
      numbers_digits.emplace_back(remainder);
      num = quotient;
    }
    num_result = 0;
    for (size_t i = 0, lenght_vector = numbers_digits.size(); i < lenght_vector; ++i) {
      num_result += numbers_digits[i];
    }
    num = num_result;
  }
  return true;
}

int main() {
  int num;
  while (true) {
    std::cin >> num;
    if (num == 0) {
      exit(EXIT_SUCCESS);
    }
    if (IsPerfectPrime(num) == true) {
      std::cout << "yes" << std::endl;
    } else {
      std::cout << "no" << std::endl;
    }
  }
  return 0;
}