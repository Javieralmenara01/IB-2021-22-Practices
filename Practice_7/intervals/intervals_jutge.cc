/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file intervals.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief  This program reads four naturalbers a1 b1 a2 b2, with where 
  *         a1 <= b1 and a2 <= b2, where [a1, b1] make up an interval and 
  *         [a2, b2] make up another interval, and prints the interval that 
  *         belongs to both.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P51126
  */

#include <iostream>

// This function shows the user information about the operation of the program
void StartingName() {
  std::cout << "This program reads four naturalbers a1 b1 a2 b2, where [a1, b1] make up an interval \
  and [a2, b2] make up another interval, and prints the interval that belongs to both. " << std::endl;
}

// This function verificate if the entered intervals are right
void VerificationIntervals(int first_interval_1, int second_interval_1, int first_interval_2, int second_interval_2) {
  if ((first_interval_1 > second_interval_1) || (first_interval_2 > second_interval_2)) {
    std::cout << "Enter only valid intervals a <= b, and c <= d" << std::endl;
  }
}

// This function returns the first number from the intersection of the intervals
int FirstInterseccion(int first_interval_1, int second_interval_1, int first_interval_2, int second_interval_2) {
  int first_interseccion{0};
  if (first_interval_1 >= first_interval_2) {
    first_interseccion = first_interval_1;
  }
  if (first_interval_2 > first_interval_1) {
    first_interseccion = first_interval_2;
  }
  return first_interseccion;
}

// This function returns the last number from the intersection of the intervals
int LastInterseccion(int first_interval_1, int second_interval_1, int first_interval_2, int second_interval_2) {
  int last_interseccion{0};
  if (second_interval_1 <= second_interval_2) {
    last_interseccion = second_interval_1;
  }
  if (second_interval_1 > second_interval_2) {
    last_interseccion = second_interval_2;
  }
  return last_interseccion;
}

int main() {
  StartingName();
  int first_interval_1; // First number of first interval
  int second_interval_1; // Last number of first interval
  int first_interval_2; // First number of second interval
  int second_interval_2; // Last number of second inteval
  std::cin >> first_interval_1 >> second_interval_1 >> first_interval_2 >> second_interval_2;
  VerificationIntervals(first_interval_1, second_interval_1, first_interval_2, second_interval_2);
  int first_interseccion = FirstInterseccion(first_interval_1, second_interval_1, first_interval_2, second_interval_2);
  int last_interseccion = LastInterseccion(first_interval_1, second_interval_1, first_interval_2, second_interval_2);
  if (second_interval_2 < first_interval_1) {
    std::cout << "[]" << std::endl;
  } else if (second_interval_1 < first_interval_2) {
    std::cout << "[]" << std::endl;
  } else {
    std::cout << "[" << first_interseccion << "," << last_interseccion << "]" << std::endl;
  }
  return 0;
}