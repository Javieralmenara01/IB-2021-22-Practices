/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera
 * @date Dec 9 2021
 * @brief This file define the functions
 */

#include <fstream>
#include <iostream>
#include <cstdlib>     /// exit
#include <vector>

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

/** Calculate Accept States Function
 * The function calculates the different acceptance 
 * states and introduces them into a vector
 *  @param[in] input_file The file enterd by command line
 *  @return The vector created in the function
 */
std::vector<int> CalculateAcceptStates(std::ifstream& input_file) {
  std::vector<int> ListAcceptStates;
  std::string line_seleccionated;
  int i{1}, iterations{0};
  while (getline(input_file, line_seleccionated)) {
    if ((i != 1) && (i != 2)) {
      char num_status = line_seleccionated[2];
      if ( num_status == '1') {
        ListAcceptStates.push_back(iterations);
      }
      ++iterations;
    }
    ++i;
  }
  return ListAcceptStates;
}

/** Show Character File Function
 *  Shows the different characteristics of the file .dfa
 *  entered by line of code
 *  @param[in] input_file The file enterd by command line
 *  @param[in] kListAcceptStates The vector to analize
 *  @return Whithout return
 */
void ShowCharacteristicsFile(std::ifstream& input_file, const std::vector<int>& kListAcceptStates) {
  std::string line_seleccionated;
  int i{1};
  while (getline(input_file, line_seleccionated)) {
    if (i == 1) {
      std::cout << "|Q| = " << line_seleccionated << "\n";
      ++i;
    } else if (i == 2) {
      std::cout << "q0 = " << line_seleccionated << "\n";
      std:: cout << "F = {";
      for (size_t i {0}, size_vector = kListAcceptStates.size(); i < size_vector; i++) {
        std::cout << kListAcceptStates[i];
        if (i != (size_vector - 1)) {
          std::cout << ", ";
        }
      }
      std::cout << "}" << "\n";
      ++i;
    } else {
      char num_state = line_seleccionated[0], value_transition_a = line_seleccionated[8];
      char value_transition_b = line_seleccionated[12];
      std::cout << "delta(" << num_state << ", a) = " << value_transition_a << "\n";
      std::cout << "delta(" << num_state << ", b) = " << value_transition_b << "\n";
    }
  }
}