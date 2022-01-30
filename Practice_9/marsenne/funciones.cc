/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera
 * @date Nov 26 2021
 * @brief This file define the functions
 */

#include <iostream>
#include <cmath>
#include <cstdlib>    // exit
#include <vector>

#include "funciones.h"    

/** Shows the correct way to use the program
 * In case the use is not correct, show the message and finish
 * the execution of the program.
 * The program requires a unique natural number for its execution.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": A natural number is missing as a parameter" << std::endl;
    std::cout << "Try now " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

/** Is prime
 *  @param[in] kNumEntered. Serves as a reference in the number of iterations
 *  @return Boolean value
 */
bool IsPrime(int marsenne_number) {
  for (int i{2}; i < (sqrt(marsenne_number)); ++i) {
    if (((marsenne_number % i) == 0) || (marsenne_number == 0)) {
      return false;
    }
  }
  return true;
}

/** Find the first n prime numbers
 *  @param : Without paramters
 *  @return The prime number
 */
int CalculatePrimes(int i) {
  while (true) {
    int num_divisor{0};
    for (int iterations{2}; iterations <= i; ++iterations) {
      if ((i % iterations) == 0) {
        ++num_divisor;
      }
    }
    if (num_divisor == 1) {
      return i;
    } else {
      break;
    }
  }
  return 0;
} 

/** Show the n prime Mersenne numbers
 *  @param[in] kNumEntered. Serves as a reference in the number of iterations
 *  @param[in] prime_nums. Vector of primes to calculate Mersenne primes
 *  @return Non return
 */
void ShowMarsenneNums(const size_t kNumEntered) {
  int marsenne_num, prime_seleccionated;
  size_t num_show{0};
  for (size_t i{2}; num_show < kNumEntered; ++i) {
    prime_seleccionated = CalculatePrimes(i);
    if (prime_seleccionated != 0) {
      marsenne_num = (pow(2, prime_seleccionated) - 1);
      if (IsPrime(marsenne_num)) {
        std::cout << marsenne_num << "\n";
        ++num_show;
      }
    }
  }
}