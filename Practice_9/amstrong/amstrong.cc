/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file amstrong.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 26 2021
  * @brief This program shows the user if the number entered is an Armstrong number. An Armstrong number is 
  *        a number that is the sum of its own digits, each of which raised to the number of digits in the number.
  * @bug There are no known bugs
  * @see https://github.com/ULL-ESIT-IB-2021-2022/P09-GHClassroom-Functions2/blob/main/Functions2-GHClassroom.md
  */

#include <iostream> 
#include <vector>
#include <cstdlib>     /// exit

#include "funciones.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string sentece_entered = argv[1];
  const size_t kNumEntered = stoi(sentece_entered);
  std::vector<int> digits_num = DescompositionNum(kNumEntered);
  size_t sum_digits = SumDigits(digits_num);
  if (sum_digits == kNumEntered) {
    std::cout << kNumEntered << " is an Armstrong number" << std::endl;
  } else {
    std::cout << kNumEntered << " is not an Armstrong number" << std::endl;
  }
  return 0;
}