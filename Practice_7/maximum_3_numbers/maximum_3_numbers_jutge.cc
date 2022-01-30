/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file maximum_3_numbers.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief The program reads three natural numbers and prints the biggest.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P90615 
  */

#include <iostream>

// This function shows the user information about the operation of the program
void StartingName() {
  std::cout << "The program reads three natural numbers and prints the biggest" << std::endl;
}

// This function calculates the maximum number of the entered numbers
int NumMaximum(int first_num_entered, int second_num_entered, int third_num_entered) {
  int maximum_num;
  if ((first_num_entered > second_num_entered) && (first_num_entered > third_num_entered)) {
    maximum_num = first_num_entered;
  }
  if ((second_num_entered > first_num_entered) && (second_num_entered > third_num_entered)) {
    maximum_num = second_num_entered;
  }
  if ((third_num_entered > first_num_entered) && (third_num_entered > second_num_entered)) {
    maximum_num = third_num_entered;
  }
  if ((first_num_entered > second_num_entered) && (second_num_entered == third_num_entered)) {
    maximum_num = first_num_entered;
  }
  if ((second_num_entered > first_num_entered) && (first_num_entered == third_num_entered)) {
    maximum_num = second_num_entered;
  }
  if ((third_num_entered > second_num_entered) && (first_num_entered == second_num_entered)) {
    maximum_num = third_num_entered;
  }
  if ((first_num_entered < second_num_entered) && (second_num_entered == third_num_entered)) {
    maximum_num = third_num_entered;
  }
  if ((second_num_entered < first_num_entered) && (first_num_entered == third_num_entered)) {
    maximum_num = first_num_entered;
  }
  if ((third_num_entered < second_num_entered) && (first_num_entered == second_num_entered)) {
    maximum_num = second_num_entered;
  }
  if ((first_num_entered == second_num_entered) && (second_num_entered == third_num_entered)) {
    maximum_num = first_num_entered;
  }
  return maximum_num;
}

int main() {
  StartingName();
  int first_num_entered, second_num_entered, third_num_entered;
  std::cin >> first_num_entered >> second_num_entered >> third_num_entered;
  int maximum_num = NumMaximum(first_num_entered, second_num_entered, third_num_entered);
  std::cout << maximum_num << std::endl;
  return 0;  
}