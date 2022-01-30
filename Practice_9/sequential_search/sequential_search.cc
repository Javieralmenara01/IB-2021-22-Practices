/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file sequential_search.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program that tells if the integer number x 
  *        is present in the vector of integer numbers v.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11725_en
  */

#include <iostream>
#include <vector>

 /**
 * @brief Shows the user how the program works
 * @param: Whitout parameters
 * @return Non return
 */
void Preamble() {
  std::cout << "The program reads a non-empty sequence of integer numbers, \
  and tells how many of them are equal to the last one." << std::endl;
}

/**
 * @brief Show if the number entered exists in the vector entered
 * @param [int] : num to search
 * @param vector: vector to analize
 * @return Boolean value
 */
bool exists(int num_entered, const std::vector<int> kListNumbers) {
  for (size_t i{0}, length_vector = (kListNumbers.size() - 1); i < length_vector; ++i) {
    if (kListNumbers[i] == num_entered) {
      return true;
    }
  }
  return false;
}

/**
 * @brief Main funcition
 * @param: Whitout parameters
 */
int main() {
  int num_entered;
  std::cin >> num_entered;
  std::vector<int> list_numbers;
  while (true) {
    int new_num_entered;
    list_numbers.push_back(new_num_entered);
    if (!std::cin) {
      break;
    }
  }
  exists(num_entered, list_numbers);
  return 0;
}