/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu0101466552@ull.edu.es
 * @date Dec 13 2021
 * @brief This file declares the "Help Text" constant and four functions
 */

#include <fstream>
#include <iostream>

const std::string kHelpText = " ";

void Usage(int argc, char *argv[]);
std::string SearchBigWord(std::ifstream& file_entered);
std::string SearchSecondBigWord(std::ifstream& file_entered, const std::string& kBigWord);
std::string SearchThirdBigWord(std::ifstream& file_entered, const std::string& kBigWord, const std::string& kSecondBigWord);