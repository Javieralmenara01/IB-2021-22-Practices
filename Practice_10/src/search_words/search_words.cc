/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file search_words.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 6 2021
  * @brief The program prints on the screen the word with the highest number of vowels and 
  *        the word with the highest number of consonants (regardless of whether it is 
  *        uppercase or lowercase) found in the text file that is passed to it as a parameter.
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
  std::string word_greater_vowels, word_greater_consonants;
  word_greater_vowels = SearchWordVowels(file_entered);
  std::ifstream file_entered_2 (argv[1]);
  word_greater_consonants = SearchWordConsonats(file_entered_2);
  file_entered.close();
  std::cout << "The word with more vowels is: " << word_greater_vowels << "\n";
  std::cout << "The word with more consonants is: " << word_greater_consonants << "\n";
  return 0;
}
