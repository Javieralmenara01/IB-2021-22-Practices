/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file increasing_pairs.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program reads sequences of natural numbers, and that for each one prints 
  *        the number of pairs of consecutive numbers such that the second number of the
  *        pair is greater than the first one.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P73501_en
  */

#include <iostream>
#include <vector>
#include <iomanip>

 /**
 * @brief Shows the user how the program works
 * @param :Whitout parameters
 * @return Non return
 */
void Preamble() {
  std::cout << "The program reads sequences of natural numbers, and that for each one prints the number of pairs \
  of consecutive numbers such that the second number of the pair is greater than the first one." << std::endl;
}

/**
 * @brief Shows the user how the program works
 * @param [in] kSequenceEntered: Whitout parameters
 * @return The num of pairs detected
 */
int AccountantPairs(const std::vector<int>& kSequenceEntered) {
  int num_pairs{0};
  for (size_t i{0}, length_sequence = (kSequenceEntered.size() - 1); i < length_sequence; ++i) {
    if (kSequenceEntered[i] < kSequenceEntered[i + 1]) {
      ++num_pairs;
    }
  }
  return num_pairs;
}

/** 
 * Main function
 * @param: Whitout paremeters
 */
int main() {
  // Preamble();
  int num_sequences;
  std::cin >> num_sequences;
  for (int i{0}; i < num_sequences; ++i) {
    std::vector<int> sequence_entered;
    while (true) {
      int new_num_entered;
      std::cin >> new_num_entered;
      if (new_num_entered == 0) {
        break;
      }
      sequence_entered.push_back(new_num_entered);
    }
    int num_pairs = AccountantPairs(sequence_entered);
    std::cout << num_pairs << std::endl;
  }
  return 0;
}