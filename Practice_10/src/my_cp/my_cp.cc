/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file my_cp.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 7 2021
  * @brief The program read a file by command line and copy into new file.
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
  std::string file_name = (argv[2]), line_seleccionated;
  std::ofstream file_created;
  file_created.open(file_name);
  while (getline(file_entered, line_seleccionated)) {
    file_created << line_seleccionated << "\n";
  }
  file_created.close();
  return 0;
}