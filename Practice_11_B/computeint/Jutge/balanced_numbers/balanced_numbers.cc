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

#include <vector>

bool is_balanced(int n) {
  int remainder{0}, quotient{0}, even_digits{0}, odd_digits{0};
  std::vector<int> numbers_digits;
  while (n > 0 ) {
    remainder = (n % 10);
    quotient = (n / 10);
    numbers_digits.emplace_back(remainder);
    n = quotient;
  }
  for (size_t i{0}, length_vector = numbers_digits.size(); i < length_vector; i += 2) {
    even_digits += numbers_digits[i];
  }
  for (size_t i{1}, length_vector = numbers_digits.size(); i < length_vector; i += 2) {
    odd_digits += numbers_digits[i];
  }
  if (even_digits == odd_digits) {
    return true;
  } else {
    return false;
  }
}