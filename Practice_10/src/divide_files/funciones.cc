/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera
 * @date Dec 8 2021
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

/** Search Letter Function 
 * This function search the initial letters and keept
 * the words in a file
 *
 *  @param[in] file_entered The file to analize
 *  @param[in] kCapitalLetter The first character to compare with first letter of the words
 *  @param[in] kLowercaseLetter The second character to compare with second letter of the words
 *  @return file_created: The file created in the function
 */
std::ofstream SearchLetters(std::ifstream& file_entered, const char kCapitalLetter, const char kLowercaseLetter) {
  std::string word_seleccionated;
  std::ofstream file_created;
  file_created.open("filecreated.txt");
  while (getline(file_entered, word_seleccionated, ' ')) {
    char letter_seleccionated = word_seleccionated[0];
    if ((letter_seleccionated == kCapitalLetter) || (letter_seleccionated == kLowercaseLetter)) {
      file_created << word_seleccionated << "\n";
    }
  }
  file_created.close();
  return file_created;
}