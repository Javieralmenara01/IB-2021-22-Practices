/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file primality.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 16 2021
  * @brief Write a program that reads a sequence of natural numbers and, for each one, tells if 
  *        it is a prime number or not. Remember that a natural number is prime if and only if 
  *        it is greater than 1 and it does not have any positive divisor other than 1 and itself.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48713_en
  */

#include <iostream>
#include <vector>
#include <cmath>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "Write a program that reads a sequence of natural numbers and, for each one, tells if \
  it is a prime number or not" << std::endl;
}

// This function checks the entered number it is prime or not
bool IsPrime(const int kNumEntered) {
  if ((kNumEntered == 1) || (kNumEntered == 0)) {
    return false;
  }
  for (int divisor{1}; (divisor <= (sqrt(kNumEntered))); ++divisor) {
    if (((kNumEntered % divisor) == 0) && (!(divisor == 1))) {
      return false;
    }
  }
  return true;
}

// This function show if the number entered is prime or not
void ShowPrime(const int kNumEntered) {
  if (IsPrime(kNumEntered)) {
    std::cout << kNumEntered << " is prime\n";
  } else {
    std::cout << kNumEntered << " is not prime\n";
  }
}

int main() {
  // Preamble();
  int num_numbers; // This variable referes to number to iterations entered by users
  std::cin >> num_numbers; 
  std::vector<int> list_numbers;
  for (int i{0}; i < num_numbers; ++i) {
    int new_num_entered;
    std::cin >> new_num_entered;
    list_numbers.push_back(new_num_entered);
  }
  for (int i {0}; i < num_numbers; ++i) {
    ShowPrime(list_numbers[i]);
  }
  return 0;
}