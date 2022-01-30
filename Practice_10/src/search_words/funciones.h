/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu0101466552@ull.edu.es
 * @date Nov 26 2021
 * @brief This file declares the "Help Text" constant and three functions
 */

#include <fstream>
#include <iostream>

const std::string kHelpText = "The program prints on the screen the word with the highest \
number of vowels and the word with the highest number of consonants (regardless of whether \
it is uppercase or lowercase) found in the text file that is passed to it as a parameter.";

void Usage(int argc, char *argv[]);
std::string SearchWordVowels(std::ifstream& file_entered);
std::string SearchWordConsonats(std::ifstream& file_entered);