/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file add_one_second.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief  The program reads a set of numbers of the form hh mm ss representing 
  *         hours, minutes, and seconds respectively and adds one second.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P34279 
  */

#include <iostream>

// This function shows the user information about the operation of the program
void StartingName() {
  std::cout << "The program reads a set of numbers of the form hh mm ss and adds one second." << std::endl;
}

/*This function converts from decimal system to sexagesimal system,
 and returns only the hours for the accountant */
int DecimalToSexagecimalHours(int hours_accountant, int minutes_accountant, int seconds_accountant) {
  int days{0};
  ++seconds_accountant;
  while (seconds_accountant >= 60) {
    ++minutes_accountant;
    seconds_accountant -= 60;
  }
  while (minutes_accountant >= 60) {
    ++hours_accountant;
    minutes_accountant -= 60;
  }
  while (hours_accountant >= 24) {
    hours_accountant -=24;
    ++days;
  }
  return hours_accountant;
}
/* This function converts from decimal system to sexagesimal system, 
and returns only the minutes for the accountant */
int DecimalToSexagecimalMinutes(int hours_accountant, int minutes_accountant, int seconds_accountant) {
  int days{0};
  ++seconds_accountant;
  while (seconds_accountant >= 60) {
    ++minutes_accountant;
    seconds_accountant -= 60;
  }
  while (minutes_accountant >= 60) {
    ++hours_accountant;
    minutes_accountant -= 60;
  }
  while (hours_accountant >= 24) {
    hours_accountant -=24;
    ++days;
  }
  return minutes_accountant;
}

/* This function converts from decimal system to sexagesimal system,
 and returns only the seconds for the accountant */
int DecimalToSexagecimalSeconds(int hours_accountant, int minutes_accountant, int seconds_accountant) {
  int days{0};
  ++seconds_accountant;
  while (seconds_accountant >= 60) {
    ++minutes_accountant;
    seconds_accountant -= 60;
  }
  while (minutes_accountant >= 60) {
    ++hours_accountant;
    minutes_accountant -= 60;
  }
  while (hours_accountant >= 24) {
    hours_accountant -=24;
    ++days;
  }
  return seconds_accountant;
}

// This function converts those one-digit values less than 10, into two-digit values adds one zero
void CompleteZeros(int hours_accountant, int minutes_accountant, int seconds_accountant) {
  if (hours_accountant < 10) {
    if (minutes_accountant < 10) {
      if (seconds_accountant < 10) {
        std::cout << "0" << hours_accountant << ":" << "0";
        std::cout << minutes_accountant << ":" << "0" << seconds_accountant << std::endl;
        exit(EXIT_SUCCESS);
      } else {
        std::cout << "0" << hours_accountant << ":" << "0";
        std::cout << minutes_accountant << ":" << seconds_accountant << std::endl;
        exit(EXIT_SUCCESS);
      }
    } 
  }
  if (hours_accountant < 10) {
    if (seconds_accountant < 10) {
      std::cout << "0" << hours_accountant << ":" << minutes_accountant;
      std::cout << ":" << "0" << seconds_accountant << std::endl;
      exit(EXIT_SUCCESS);
    } else {
      std::cout << "0" << hours_accountant << ":" << minutes_accountant;
      std::cout << ":" << seconds_accountant << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (minutes_accountant < 10) {
    if (seconds_accountant < 10) {
      std::cout << hours_accountant << ":" << "0" << minutes_accountant;
      std::cout << ":" << "0" << seconds_accountant << std::endl;
      exit(EXIT_SUCCESS);
    } else {
      std::cout << hours_accountant << ":" << "0" << minutes_accountant;
      std::cout << ":" << seconds_accountant << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
  if (seconds_accountant < 10) {
    std::cout << hours_accountant << ":" << minutes_accountant;
    std::cout << ":" << "0" << seconds_accountant << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::cout << hours_accountant << ":" << minutes_accountant << ":" << seconds_accountant << std::endl;
}

int main(int argc, char *argv[]) {
  StartingName();
  int hours_entered, minutes_entered, seconds_entered;
  std::cin >> hours_entered >> minutes_entered >> seconds_entered;
  /* These variables represent the value in the counter, and refer to the hours,
   minutes and seconds shown to the user. */
  int hours_accountant = DecimalToSexagecimalHours(hours_entered, minutes_entered, seconds_entered);
  int minutes_accountant = DecimalToSexagecimalMinutes(hours_entered, minutes_entered, seconds_entered);
  int seconds_accountant = DecimalToSexagecimalSeconds(hours_entered, minutes_entered, seconds_entered);
  CompleteZeros(hours_accountant, minutes_accountant, seconds_accountant);
  return 0;
}