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

const std::string kHelpText = "The program remove from a text file that will take blank lines as input.";

void Usage(int argc, char *argv[]);
std::ofstream DeleteBlankLines(std::ifstream& file_entered);