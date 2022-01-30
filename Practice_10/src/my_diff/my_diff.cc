/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file my_diff.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 7 2021
  * @brief The program compares two files given by the user and shows if 
  *        they are the same or on the contrary their differences.
  * @bug There are no known bugs
  * @see https://github.com/ULL-ESIT-IB-2021-2022/P10-Files-Doxygen/blob/main/Files-Doxygen.md
  */

#include <fstream>
#include <iostream>
#include <cstdlib>     /// exit

#include "funciones.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::ifstream first_file (argv[1]);
  std::ifstream second_file (argv[2]);
  std::string line_select_1, line_select_2;
  int iterations{1}, num_diferences{0};
  while ((getline(first_file, line_select_1)) && (getline(second_file, line_select_2))) {
    if (line_select_1 != line_select_2) {
      std::cout << "Difference found on the line: " << iterations << "\n";
      std::cout << line_select_1 << "\n" << line_select_2 << "\n";
      ++num_diferences;
    }
    ++iterations;
  }
  if (num_diferences == 0) {
    std::cout << "The files are the same." << "\n";
  }
  first_file.close();
  second_file.close();
  return 0;
}