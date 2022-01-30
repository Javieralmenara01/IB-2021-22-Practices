/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera
 * @date Dec 6 2021
 * @brief This file define the functions
 */

#include <fstream>
#include <iostream>
#include <cstdlib>     /// exit

#include "funciones.h"

/** Shows the correct way to use the program
 * In case the use is not correct, show the message and finish
 * the execution of the program.
 * The program requires a unique file parameter for its execution.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 2) {
    std::cout << argv[0] << ": A file is missing as a parameter" << std::endl;
    std::cout << "Try now " << argv[0] << " --help for more information" << std::endl;
    exit(EXIT_SUCCESS);
  }
  std::string parameter{argv[1]};
  if (parameter == "--help") {
    std::cout << kHelpText << std::endl;
    exit(EXIT_SUCCESS);
  }
}

std::string SearchWordVowels(std::ifstream& file_entered) {
  std::string word_greater_vowels, word_seleccionated;
  int greater_num_vowels{0};
  while (getline(file_entered, word_seleccionated, ' ')) {
    int num_vowels{0}, num_ascii;
    for (size_t i{0}, word_size = word_seleccionated.size(); i < word_size; ++i) {
      num_ascii = word_seleccionated[i];
      if (((num_ascii > 64) && (num_ascii < 98)) || ((num_ascii > 90) && (num_ascii < 122))) {
        if (((((num_ascii == 65) || (num_ascii == 97)) || ((num_ascii == 69) || (num_ascii == 101)))
         || (((num_ascii == 73) || (num_ascii == 105)) || ((num_ascii == 79) || (num_ascii == 111))))
         || ((num_ascii == 85) || (num_ascii == 117))) {
          ++num_vowels;
        }
      }
    }
    if (num_vowels > greater_num_vowels) {
      greater_num_vowels = num_vowels;
      word_greater_vowels = word_seleccionated;
    }
  }
  return word_greater_vowels;
}

std::string SearchWordConsonats(std::ifstream& file_entered) {
  std::string word_greater_consonants, word_seleccionated;
  int greater_num_consonants{0};
  while (getline(file_entered, word_seleccionated, ' ')) {
    int num_consonants{0}, num_ascii;
    for (size_t i{0}, word_size = word_seleccionated.size(); i < word_size; ++i) {
      num_ascii = word_seleccionated[i];
      if (((num_ascii > 64) && (num_ascii < 98)) || ((num_ascii > 90) && (num_ascii < 122))) {
        if (!(((((num_ascii == 65) || (num_ascii == 97)) || ((num_ascii == 69) || (num_ascii == 101)))
         || (((num_ascii == 73) || (num_ascii == 105)) || ((num_ascii == 79) || (num_ascii == 111))))
         || ((num_ascii == 85) || (num_ascii == 117)))) {
          ++num_consonants;
        }
      }
    }
    if (num_consonants > greater_num_consonants) {
      greater_num_consonants = num_consonants;
      word_greater_consonants = word_seleccionated;
    }
  }
  return word_greater_consonants;
}