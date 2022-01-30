/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file read_DFA.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 9 2021
  * @brief The program reads a text file input.dfa that contains the specification of a DFA 
  *        and prints its characteristics to the screen.
  * @bug There are no known bugs
  * @see https://github.com/ULL-ESIT-IB-2021-2022/P10-Files-Doxygen/blob/main/Files-Doxygen.md
  */

#include <fstream>
#include <iostream>
#include <cstdlib>     /// exit
#include <vector>

#include "funciones.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::ifstream input_file {argv[1]};
  std::vector<int> list_accept_states = CalculateAcceptStates(input_file);
  /// Take again the input file
  std::ifstream input_file_2 {argv[1]};
  ShowCharacteristicsFile(input_file_2, list_accept_states);
  return 0;
}