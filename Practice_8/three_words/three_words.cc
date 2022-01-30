/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file three_words.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads three words a, b and c, and prints a line with c, b and a in this order.”.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P62421_en
  */

#include <iostream>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "This program reads three words a, b and c, and prints a line with c, b and a in this order." << std::endl;
}

// This function change the order of words, and show them
void ChangeOrderWords(const std::string kWordEntered1, const std::string kWordEntered2, const std::string kWordEntered3) {
  std::cout << kWordEntered3 << " " << kWordEntered2 << " " << kWordEntered1 << std::endl;
}

int main() {
  //Preamble();
  std::string word_entered_1, word_entered_2, word_entered_3;
  std::cin >> word_entered_1 >> word_entered_2 >> word_entered_3;
  ChangeOrderWords(word_entered_1, word_entered_2, word_entered_3);
  return 0;
}