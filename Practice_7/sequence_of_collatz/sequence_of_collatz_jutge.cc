/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file sequence_of_collatz.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief  The program displays the number of steps required to perform the Collatz conjecture.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P80660
  */

#include <iostream>
#include <sstream>
#include <vector>

// This function shows the user information about the operation of the program
void Preamble() {
  std::cout << "The program displays the number of steps required to perform the Collatz conjecture." << std::endl;
}

//This function shows the steps to end the sequence of Collatz
int StepsSequenceOfCollatz(int num_entered) {
  int steps_to_end{0}; // This variable refers to numbers of steps to end the sequence of Collatz
  while (num_entered > 1) {
    if (num_entered % 2 == 0) {
      num_entered = num_entered / 2;
      ++steps_to_end;
    } else {
      num_entered = ((num_entered * 3) + 1);
      ++steps_to_end;
    }
  }
  return steps_to_end;
}

int main() {
  Preamble();
  while (true) {
    int new_num_entered; // This variable refers to number entered by user
    std::cin >> new_num_entered;
    if (!std::cin) {
      break;
    }
    int stepstoend = StepsSequenceOfCollatz(new_num_entered);
    std::cout << stepstoend << std::endl;
  }
  return 0;
}