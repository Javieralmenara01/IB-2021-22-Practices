/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file looking_a.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads a sequence of characters ended in a dot and tells 
  *        if the sequence has any lowercase ‘a’ or not.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P75149
  */

#include <iostream>
#include <vector>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "This program reads a sequence of characters ended in a dot and tells if \
  the sequence has any lowercase ‘a’ or not." << std::endl;
}

// This function search de letters a in the sentence entered
bool SearchTheA(const std::vector<char> kSentenceEntered) {
  for (std::size_t i = 0, size_of_string = kSentenceEntered.size(); size_of_string != i; ++i) {
    if (kSentenceEntered[i] == 'a') {
      return true;
    }
  }
  return false;
}

int main() {
  // Preamble();
  char letter_entered;
  std::vector<char> sentece_entered; // Sentence entered by user
  while (!(letter_entered == '.')) {
    std::cin >> letter_entered;
    sentece_entered.push_back(letter_entered);
  }
  if (SearchTheA(sentece_entered)) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
  return 0;
}