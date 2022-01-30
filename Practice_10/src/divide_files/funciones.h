/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu0101466552@ull.edu.es
 * @date Dec 8 2021
 * @brief This file declares the "Help Text" constant and two functions
 */

#include <fstream>
#include <iostream>

const std::string kHelpText = "This program obtains the words from a file and creates several files \
with the name of the different letters where it stores the words that begin with those letters. ";

void Usage(int argc, char *argv[]);
std::ofstream SearchLetters(std::ifstream& file_entered, const char kCapitalLetter, const char kLowercaseLetter);