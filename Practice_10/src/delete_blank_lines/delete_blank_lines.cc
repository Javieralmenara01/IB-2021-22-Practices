/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file delete_blank_lines.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 7 2021
  * @brief The program remove from a text file that will take blank lines as input.
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
  std::ifstream file_entered {argv[1]};
  std::string file_name {argv[1]}, line_seleccionated;
  const char* file_name_changed = file_name.c_str();
  std::ofstream file_created = DeleteBlankLines(file_entered);
  file_entered.close();
  rename("change.txt", file_name_changed);
  return 0;
}