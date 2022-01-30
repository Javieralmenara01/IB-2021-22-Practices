/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu0101466552@ull.edu.es
 * @date Dec 7 2021
 * @brief This file declares the "Help Text" constant and two functions
 */

#include <fstream>
#include <iostream>

const std::string kHelpText = "rotates the lowercase vowels found in the file that \
is passed as a parameter, meaning rotating the change from 'a' to 'e', 'e' to 'i', \
'i' to 'o', 'o' for 'u', 'u' for 'a'";

void Usage(int argc, char *argv[]);
std::ofstream ChangeVowels(std::ifstream& file_entered);