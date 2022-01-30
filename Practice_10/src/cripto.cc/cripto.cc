/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file cripto.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 8 2021
  * @brief The program reads a file given by the command line to encrypt and / 
  *        or decrypt text files with the xor methos or the caesar encrypted.
  * @bug There are no known bugs
  * @see https://github.com/ULL-ESIT-IB-2021-2022/P10-Files-Doxygen/blob/main/Files-Doxygen.md
  */

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>     /// exit

#include "funciones.h"

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::ifstream file_input (argv[1]);
  if (!file_input) {
    std::cout << "No se ha podido encontrar el fichero correctamente" << "\n";
    exit(EXIT_SUCCESS);
  }
  std::ofstream file_output;
  std::string name_file (argv[2]), password (argv[4]);
  std::string method_use (argv[3]), operation (argv[5]);
  int num_method = stoi(method_use); 
  if (!((num_method == 1) || (num_method == 2))) {
    std::cout << "El método introducido no es correcto" << "\n";
    exit(EXIT_SUCCESS);
  }
  if (num_method == 1) {
    file_output = EncryptedXor(file_input, password, name_file);
  } else if (num_method == 2) {
    int crypto_num = stoi(password);   
    if (operation == "+") {
      file_output = EncryptedCaesar(file_input, crypto_num, name_file);
    } else if (operation == "-") {
      crypto_num -= (2 * crypto_num);
      file_output = EncryptedCaesar(file_input, crypto_num, name_file);
    }
  }
  file_output.close();
  return 0;
}