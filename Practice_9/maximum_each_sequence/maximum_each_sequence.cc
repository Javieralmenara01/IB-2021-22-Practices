/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file maximum_each_sequence.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program reads sequences of integer numbers and prints the 
  *        maximum value of each sequence.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P71753_en
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
  std::cout << "The program reads sequences of integer numbers and\
  prints the maximum value of each sequence." << std::endl;
}

/**
 * @brief Searches the maximum number of the sequence entered
 * @param [in] kSequenceEntered: the vector to analize
 * @return The number of number equals
 */
int MaximumNum(const std::vector<int>& kSequenceEntered) {
  int maximum_num = kSequenceEntered[0];
  for (size_t i{1}, length_vector = kSequenceEntered.size(); i < length_vector; ++i) {
    if (kSequenceEntered[i] > maximum_num) {
      maximum_num = kSequenceEntered[i];
    }
  }
  return maximum_num;
}

/** 
 * Main function
 *  @param: Whitout paremeters
 */
int main() {
  // Preamble();
  int size_of_sequence;
  int new_num_entered;
  while (true) {
    std::cin >> size_of_sequence;
    std::vector<int> sequence_entered;
    if (!std::cin) {
      exit(EXIT_SUCCESS);
    }
    for (int i{0}; i < size_of_sequence; ++i) {
      std::cin >> new_num_entered;
      sequence_entered.push_back(new_num_entered);
    }
    std::cout << MaximumNum(sequence_entered) << std::endl;
  }
  return 0;
}
