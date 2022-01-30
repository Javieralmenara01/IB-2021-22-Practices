/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file maximum_sums.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program reads a sequence of numbers, and prints the maximum quantity that 
  *        can be obtained by adding numbers consecutively from the beginning, and the maximum
  *        quantity that can be obtained by adding numbers consecutively from the end.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P20262_en
  */

#include <iostream>
#include <vector>
#include <iomanip>

/**
 * @brief Shows the user how the program works
 * @param : Whitout parameters
 * @return Non return
 */
void Preamble() {
  std::cout << "The program reads a sequence of numbers, and prints the maximum quantity that can be \
  obtained by adding numbers consecutively from the beginning, and the maximum quantity that can be \
  obtained by adding numbers consecutively from the end." << std::endl;
}

/**
 * @brief Calculate the sum begin by the first term
 * @param [in] kListNumbers: vector to analize
 * @return The sum
 */
int SumBeginFirst(const std::vector<int> kListNumbers) {
  int sum_first{0}, sum_terms{0};
  for (size_t i{0}, length_vector = kListNumbers.size(); i < length_vector; ++i) {
    sum_terms += kListNumbers[i];
    if (sum_terms > sum_first) {
      sum_first = sum_terms;
    }
  }
  return sum_first;
}

/**
 * @brief Calculate the sum begin by the last term
 * @param [in] kListNumbers: vector to analize
 * @return The sum
 */
int SumBeginLast(const std::vector<int> kListNumbers) {
  int sum_last{0}, sum_terms{0};
  for (int i = (kListNumbers.size() - 1); i >= 0; --i) {
    sum_terms += kListNumbers[i];
    if (sum_terms > sum_last) {
      sum_last = sum_terms;
    }
  }
  return sum_last;
}

/** 
 * Main function
 *  @param: Whitout paremeters
 */
int main() {
  int num_numbers, new_num_entered, sum_begin, sum_last;
  while (true) {
    std::cin >> num_numbers;
    std::vector<int> list_numbers;
    if (!std::cin) {
      exit(EXIT_SUCCESS);
    }
    for (int i{0}; i < num_numbers; ++i) {
      std::cin >> new_num_entered;
      list_numbers.push_back(new_num_entered);
    }
    sum_begin = SumBeginFirst(list_numbers);
    sum_last = SumBeginLast(list_numbers);
    std::cout << sum_begin << " " << sum_last << std::endl;
  }
  return 0;
}

