/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file equal_last_one.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program reads a non-empty sequence of integer numbers, 
  *        and tells how many of them are equal to the last one.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P14130_en
  */

#include <iostream> 
#include <vector>
#include <cstdlib>     /// exit

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
 * @brief Searches the equals numbers of last number of sequence entered
 * @param [in] kListNumbers: the vector to analize
 * @return The number of number equals
 */
int SearchEqualsNumbers(const std::vector<int>& kListNumbers) {
  int num_equals{0}, last_num = kListNumbers.back();
  for (size_t i{0}, length_of_lits = (kListNumbers.size() - 1); i < length_of_lits; ++i ) {
    if (kListNumbers[i] == last_num) {
      ++num_equals;
    }
  }
  return num_equals;
}

/** 
 *  Main function
 *  @param : Whitout paremeters
 */
int main() {
  int num_numbers;
  std::cin >> num_numbers;
  std::vector<int> list_numbers;
  for (int i{0}; i < num_numbers; ++i) {
    int new_num_entered;
    std::cin >> new_num_entered;
    list_numbers.push_back(new_num_entered);
  }
  int num_equals = SearchEqualsNumbers(list_numbers);
  std::cout << num_equals << std::endl;
  return 0;
}