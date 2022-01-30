/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera
 * @date Dec 7 2021
 * @brief This file define the functions
 */

#include <fstream>
#include <iostream>
#include <cstdlib>     /// exit
#include <cstring>

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

/** Delete Blank Lines Function
 * This function ommited the blank lines in a file
 * and rewrite the file without these
 *
 *  @param[in] file_entered The file to analize
 *  @return The file created in function
 */
std::ofstream DeleteBlankLines(std::ifstream& file_entered) {
  std::string line_seleccionated;
  std::ofstream file_created;
  file_created.open("change.txt");
  while (getline(file_entered, line_seleccionated)) {
    if (line_seleccionated.size() > 1) {
      file_created << line_seleccionated << "\n";
    } 
  }
  file_created.close();
  return file_created;
}