/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file divide_files.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 8 2021
  * @brief This program obtains the words from a file and creates several files with the name 
  *        of the different letters where it stores the words that begin with those letters.
  * @bug There are no known bugs
  * @see https://github.com/ULL-ESIT-IB-2021-2022/P10-Files-Doxygen/blob/main/Files-Doxygen.md
  */

#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>     /// exit

#include "funciones.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  for (int i{65}; i < 91; ++i) {
    std::ifstream file_entered (argv[1]);
    char capital_letter = i, lowercase_letter = (32 + i);
    std::stringstream file_name;
    file_name << capital_letter << ".txt";
    std::string name_of_file = file_name.str();
    const char* name_file = name_of_file.c_str();
    std::ofstream file_created;
    file_created = SearchLetters(file_entered, capital_letter, lowercase_letter);
    rename("filecreated.txt", name_file);
  }
  return 0;
}