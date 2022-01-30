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

/** Break down the given number into its digits
 *  @param[in] num_entered. Number to decompose into its digits
 *  @return The vector created in the function
 */
std::vector<int> DescompositionNum(int num_entered) {
  int reminder, quotient;
  std::vector<int> digits_num;
  while (reminder > 0) {
    reminder = (num_entered % 10);
    quotient = (num_entered / 10);
    digits_num.emplace_back(reminder);
    num_entered = quotient;
  }
  return digits_num;
}

/** Add the digits of the given vector
 *  @param[in] kDigitsNum, vector to analize
 *  @return An integer that corresponds to the sum of the digits
 */
int SumDigits(const std::vector<int>& kDigitsNum) {
  int sum_digits{0};
  for (size_t i{0}, length_vector = kDigitsNum.size(); i < length_vector; ++i) {
    sum_digits += kDigitsNum[i];
  }
  return sum_digits;
}
