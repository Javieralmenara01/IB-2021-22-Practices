/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file convert_to_seconds.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief The program reads a number a, which represents years, a number b which represents
  *        days, a number c which represents hours, a number d which represents minutes and a
  *        number e which represents seconds and convert everything to seconds.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P70955 
  */

#include <iostream>

// This function shows the user information about the operation of the program
void StartingName() {
  std::cout << "The program reads a number years, days, hours, minutes and seconds and convert everything to seconds" << std::endl;
}

// This function convert all the values entered by user (years, days, hours, minutes and seconds) to seconds
int ConvertToSeconds(int years_entered, int days_entered, int hours_entered, int minutes_entered, int seconds_entered) {
  long sum_all_seconds = ((years_entered * 31536000) + (days_entered * 86400));
  sum_all_seconds = sum_all_seconds + ((hours_entered * 3600) + (minutes_entered * 60) + seconds_entered);
  return sum_all_seconds;
}

int main() {
  StartingName();
  int years_entered; 
  int days_entered;
  int hours_entered;
  int minutes_entered;
  int seconds_entered;
  std::cin >> years_entered >> days_entered >> hours_entered >> minutes_entered >> seconds_entered;
  long sum_all_seconds = ConvertToSeconds(years_entered, days_entered, hours_entered, minutes_entered, seconds_entered);
  std::cout << sum_all_seconds << std::endl;
  return 0;
}