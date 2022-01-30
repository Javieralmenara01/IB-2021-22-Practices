/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file i_th.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads an integer number i and a sequence of natural numbers x1, …, xn,
  *        and prints the position of number i.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P39225
  */

#include <iostream>
#include <vector>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "The program reads an integer number i and a sequence of natural numbers \
  x1, …, xn, and prints the position of number i." << std::endl;
}

// This function search the number of position entered
int WhatNumber(std::vector<int> list_num, int position_entered) {
  int num_position = list_num[((-1) + (position_entered))];
  return num_position;
}

int main() {
  // Preamble();
  int position_entered, num_entered;
  std::cin >> position_entered;
  std::vector<int> list_num;
  while (std::cin) {
    std::cin >> num_entered;
    list_num.push_back(num_entered);
  }
  int num_position = WhatNumber(list_num, position_entered);
  std::cout << "At the position " << position_entered << " there is a(n) " << num_position 
  << "." << std::endl;
  return 0;
}
