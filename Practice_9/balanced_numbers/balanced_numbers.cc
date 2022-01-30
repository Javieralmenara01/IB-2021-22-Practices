/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file balanced_numbers.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 26 2021
  * @brief The program reads  a natural number is balanced if the sum of the digits 
  *        in even positions is equal to the sum of the digits in odd positions. For 
  *        instance, 1463 and 48015 are balanced numbers.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P26492_en
  */

#include <iostream> 
#include <vector>

 /**
 * @brief Shows the user how the program works
 * @param: Whitout parameters
 * @return Non return
 */
void Preamble() {
  std::cout << "The program reads  a natural number is balanced if the sum of the digits in even positions is equal\
  to the sum of the digits in odd positions. For instance, 1463 and 48015 are balanced numbers." << std::endl;
}

/**
 * @brief Show is the number es a balanced number
 * @param [in] number_entered: num to analize
 * @return Boolean value
 */
bool is_balanced(int number_entered) {
  int remainder{0}, quotient{0}, even_digits{0}, odd_digits{0};
  bool is_balanced_num{0};
  std::vector<int> numbers_digits;
  while (number_entered > 0) {
    remainder = (number_entered % 10);
    quotient = (number_entered / 10);
    numbers_digits.emplace_back(remainder);
    number_entered = quotient;
  }
  for (size_t i{0}, length_vector = numbers_digits.size(); i < length_vector; i += 2) {
    even_digits += numbers_digits[i];
  }
  for (size_t i{1}, length_vector = numbers_digits.size(); i < length_vector; i += 2) {
    odd_digits += numbers_digits[i];
  }
  if (even_digits == odd_digits) {
    is_balanced_num = 1;
  }
  return is_balanced_num;
}

/**
 * @brief Main funcition
 * @param: Whitout parameters
 */
int main() {
  int num_entered;
  std::cin >> num_entered;
  is_balanced(num_entered);
  return 0;
}