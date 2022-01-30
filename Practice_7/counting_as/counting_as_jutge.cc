/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file counting_as.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief  The program calculates the number of a's existing in a phrase entered by the user.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P97969 
  */

#include <iostream>
#include <cstring>

// This function shows the user information about the operation of the program
void StartingName() {
  std::cout << "The program calculates the number of a's existing in a phrase entered by the user." << std::endl;
}

// This function count all the a's that exist in the sentence entered by user
int AccountantOfA(std::string sentence_entered) {
  int number_of_a{0};
  char a = 97;
  // The accountant variable performs n number of iterations
  for (std::size_t acountant = 0, size_of_string = sentence_entered.size(); size_of_string != acountant; ++acountant) {
    if (sentence_entered[acountant] == a) {
      ++number_of_a;
    }
  }
  return number_of_a;
}

int main() {
  StartingName();
  std::string sentence_entered;
  std::getline(std::cin, sentence_entered);
  int number_of_a = AccountantOfA(sentence_entered);
  std::cout << number_of_a << std::endl;
  return 0;
}