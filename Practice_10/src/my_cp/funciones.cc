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
  if ((argc != 3) && (argc != 1)) {
    std::cout << argv[0] << ": A file is missing and the name of the copy as a parameter" << std::endl;
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << kHelpText << std::endl;
      exit(EXIT_SUCCESS);
    } else {
      std::cout << "Try now " << argv[0] << " --help for more information" << std::endl;
    }
    exit(EXIT_SUCCESS);
  } else if (argc != 3) {
    std::cout << argv[0] << ": A file is missing and the name of the copy as a parameter" << std::endl;
    std::cout << "Try now " << argv[0] << " --help for more information" << std::endl;
  }
}