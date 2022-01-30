/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera
 * @date Dec 7 2021
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

/** The function takes a file as a parameter, and 
 * creates a file by modifying the indicated vowels.
 *
 *  @param[in] ifstream: File to modify
 *  @return The file already modified
 */
std::ofstream ChangeVowels(std::ifstream& file_entered) {
  std::ofstream file_created;
  file_created.open("file.txt");
  std::string sentence_entered;
  while (getline(file_entered, sentence_entered)) {
    char letter_selecionated;
    int num_ascii;
    for (size_t i{0}, length_sentece = sentence_entered.size(); i < length_sentece; ++i) {
      letter_selecionated = sentence_entered[i];
      num_ascii = letter_selecionated;
      if (num_ascii == 97) {
        num_ascii = 101;
        letter_selecionated = num_ascii;
        file_created << letter_selecionated;
      } else if (num_ascii == 101) {
        num_ascii = 105;
        letter_selecionated = num_ascii;
        file_created << letter_selecionated;
      } else if (num_ascii == 105) {
        num_ascii = 111;
        letter_selecionated = num_ascii;
        file_created << letter_selecionated;
      } else if (num_ascii == 111) {
        num_ascii = 117;
        letter_selecionated = num_ascii;
        file_created << letter_selecionated;
      } else if (num_ascii == 117) {
        num_ascii = 97;
        letter_selecionated = num_ascii;
        file_created << letter_selecionated;
      } else {
        file_created << letter_selecionated;
      }
    }
  file_created << "\n";
  }
  return file_created;
}