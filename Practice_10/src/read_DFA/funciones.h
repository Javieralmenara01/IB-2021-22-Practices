/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu0101466552@ull.edu.es
 * @date Dec 9 2021
 * @brief This file declares the "Help Text" constant and three functions
 */

#include <fstream>
#include <iostream>
#include <vector>

const std::string kHelpText = "The program reads a text file input.dfa that contains \
the specification of a DFA and prints its characteristics to the screen.";

void Usage(int argc, char *argv[]);
std::vector<int> CalculateAcceptStates(std::ifstream& input_file);
void ShowCharacteristicsFile(std::ifstream& input_file, const std::vector<int>& kListAcceptStates);