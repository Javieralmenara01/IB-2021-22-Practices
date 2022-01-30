/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file triangle.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief The program reads a natural numbers n and prints a “triangle of size n”.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P29973 
  */

#include <iostream>

// This function shows the user information about the operation of the program
void StartingName() {
  std::cout << "This program creates a triangle given a number n of size n" << std::endl;
}

// This function creates the size triangle of the entered number
void CreateTriangle(int num_entered) {
  // The accountant variable performs n number of iterations
  for (int accountant{1}; accountant <= num_entered; ++accountant) {
    std::cout << std::string(accountant, '*') << std::endl;
  }
}

int main() {
  StartingName();
  int num_entered;
  std::cin >> num_entered;
  CreateTriangle(num_entered);
  return 0;
}