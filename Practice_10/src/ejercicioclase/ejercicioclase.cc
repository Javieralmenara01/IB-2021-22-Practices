/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file .cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 7 2021
  * @brief 
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
  std::string big_word = SearchBigWord(file_entered);
  /// Take again the file
  std::ifstream file_entered_2 (argv[1]);
  std::string second_big_word = SearchSecondBigWord(file_entered_2, big_word);
  /// Take again the file
  std::ifstream file_entered_3 (argv[1]);
  std::string third_big_word = SearchThirdBigWord(file_entered_3, big_word, second_big_word);
  std::cout << big_word << " " << second_big_word << " " << third_big_word << "\n";
  return 0;
}