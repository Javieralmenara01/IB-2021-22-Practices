/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu0101466552@ull.edu.es
 * @date Dec 8 2021
 * @brief This file declares the "Help Text" constant and three functions
 */

#include <fstream>
#include <iostream>

const std::string kHelpText = "The program reads a file given by the command line to encrypt \
and / or decrypt text files with the xor methos or the caesar encrypted.";

void Usage(int argc, char *argv[]);
std::ofstream EncryptedXor(std::ifstream& file_input, const std::string pasword, std::string name_file);
std::ofstream EncryptedCaesar(std::ifstream& file_input, int password, std::string name_file);
