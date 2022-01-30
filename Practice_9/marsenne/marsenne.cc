/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file marsenne.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 26 2021
  * @brief This program calculates the first Mersenne numbers, based on a number n, that 
  *        the user has to enter via command line to execute the program.
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
  ShowMarsenneNums(kNumEntered);
  return 0;
}