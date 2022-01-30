/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu0101466552@ull.edu.es
 * @date Nov 26 2021
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <iostream>
#include <vector>

const std::string kHelpText = "This program calculates the first numbers of \
Mersenne, based on a number n, that the user \
You have to enter by command line to execute the program";

void Usage(int argc, char *argv[]);
int CalculatePrimes(int i);
void ShowMarsenneNums(const size_t kNunEntered);