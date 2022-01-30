/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file i-th_3.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 22 2021
  * @brief Write a program that, given an integer number i and a sequence 
  *        of natural numbers x1, …, xn, prints xi.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P65103
  */

#include <iostream>
#include <vector>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "Write a program that, given an integer number i and a sequence \
  of natural numbers x1, …, xn, prints xi." << std::endl;
}

// This function search the number of position entered
int WhatNumber(const std::vector<int>& kListNum, const int kPositionEntered) {
  int num_position = kListNum[kPositionEntered - 1];
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
  int size_of_list = list_num.size();
  if (position_entered > size_of_list) {
    std::cout << "Incorrect position." << std::endl;
  } else {
    int num_position = WhatNumber(list_num, position_entered);
    std::cout << "At the position " << position_entered << " there is a(n) " << num_position 
    << "." << std::endl;
  } 
  return 0;
}
