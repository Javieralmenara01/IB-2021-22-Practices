/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file rotate.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 7 2021
  * @brief The program rotates the lowercase vowels found in the file that is passed as a
  *        parameter, meaning rotating the change from 'a' to 'e', 'e' to 'i', 'i' to 'o',
  *        'o' for 'u', 'u' for 'a'.
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
  std::ofstream file_created = ChangeVowels(file_entered);
  std::string file_name = argv[1];
  const char* file_name_changed = file_name.c_str();
  file_created.open("file.txt");
  file_entered.close();
  file_created.close();
  rename("file.txt", file_name_changed);  
  return 0;
}