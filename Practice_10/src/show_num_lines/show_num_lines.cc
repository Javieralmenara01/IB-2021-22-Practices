/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file show_num_lines.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 6 2021
  * @brief The program read a file by command line and created a file with the
  *        number of the line corresponding to the beginning.
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
  std::ifstream file_entered (argv[1]);
  std::ofstream file_created;
  file_created.open("file_created.txt");
  std::string line_seleccionated;
  int i {1};
  while (getline (file_entered, line_seleccionated)) {
    file_created << i << " " << line_seleccionated << "\n";
    ++i;
  }
  file_entered.close();
  return 0;
}