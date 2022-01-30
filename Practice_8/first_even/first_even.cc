/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file first_even.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief The program reads a sequence of natural numbers and prints the position of the first even number.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P89078
  */

#include <iostream>
#include <vector>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "The program reads reads a sequence of natural numbers and prints\
   the position of the first even number." << std::endl;
}

// This function search the position of first even number
int ShearchEvenNumber(std::vector<int> list_num) {
  for (int position = 0, size_of_list = list_num.size(); size_of_list >= position; ++position) {
    int num = list_num[position];
    if ((num % 2) == 0) {
      ++position;
      return position;
    } 
  }
  return 0;
}

int main() {
  // Preamble();
  int num_entered;
  std::vector<int> list_num; // List of numbers entered by user
  while (std::cin) {
    std::cin >> num_entered;
    list_num.push_back(num_entered);
  }
  int first_even = ShearchEvenNumber(list_num);
  std::cout << first_even << std::endl;
  return 0;
}