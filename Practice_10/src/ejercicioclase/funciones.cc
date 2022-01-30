/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera
 * @date Dec 13 2021
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

/** Search Big Word 
 * This function search the big word of the file entered
 * 
 *  @param[in] file_entered The file to analize
 *  @return The word found
 */
std::string SearchBigWord(std::ifstream& file_entered) {
  std::string word_seleccionated, big_word;
  file_entered >> big_word;
  while (file_entered >> word_seleccionated) {
    if (word_seleccionated.size() > big_word.size()) {
      big_word = word_seleccionated;
    }
  }
  return big_word;
}

/** Search Second Big Word 
 * This function search the second big word of the file entered
 * 
 *  @param[in] file_entered The file to analize
 *  @param[in] kBigWord The big word of the file
 *  @return The word found
 */
std::string SearchSecondBigWord(std::ifstream& file_entered, const std::string& kBigWord) {
  std::string word_seleccionated, big_word;
  file_entered >> big_word;
  while (file_entered >> word_seleccionated) {
    if ((word_seleccionated.size() > big_word.size()) && (word_seleccionated != kBigWord)) {
      big_word = word_seleccionated;
    }
  }
  return big_word;
}

/** Search Third Big Word 
 * This function search the third big word of the file entered
 * 
 *  @param[in] file_entered The file to analize
 *  @param[in] kBigWord The big word of the file
 *  @param[in] kSecondBigWord The big word of the file
 *  @return The word found
 */
std::string SearchThirdBigWord(std::ifstream& file_entered, const std::string& kBigWord, const std::string& kSecondBigWord) {
  std::string word_seleccionated, big_word;
  file_entered >> big_word;
  while (file_entered >> word_seleccionated) {
    if ((word_seleccionated.size() > big_word.size()) && ((word_seleccionated != kBigWord) && (word_seleccionated != kSecondBigWord))) {
      big_word = word_seleccionated;
    }
  }
  return big_word;
}

