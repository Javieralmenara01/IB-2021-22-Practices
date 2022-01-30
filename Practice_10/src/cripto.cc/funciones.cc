/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera
 * @date Dec 8 2021
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
  if ((argc != 6) && (argc != 2)) {
    std::cout << argv[0] << " -- Cifrado de ficheros" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida método password operación" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  } else if (argc == 2) {
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cout << argv[0] << " -- Cifrado de ficheros" << std::endl;
      std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida método password operación" << "\n" << std::endl;
      std::cout << "fichero_entrada: Fichero a codificar" << std::endl;
      std::cout << "fichero_salida:  Fichero codificado" << std::endl;
      std::cout << "método:          Indica el método de encriptado" << std::endl;
      std::cout << "                   1: Cifrado xor" << std::endl;
      std::cout << "                   2: Cifrado de César" << std::endl;
      std::cout << "password:        Palabra secreta en el caso de método 1, Valor de K en el método 2" << std::endl;
      std::cout << "operación:       Operación a realizar en el fichero" << std::endl;
      std::cout << "                   +: encriptar el fichero" << std::endl;
      std::cout << "                   -: desencriptar el fichero" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
}

/** Encrypted Xor Function
 * This function encrypts the entered file where the encoding the xor operation of each of the characters
 * of the input text is carried out with each of the characters of the secret key, taking the key cyclically
 * (when the last character of the key is finished, it starts again with first).
 *
 *  @param[in] file_input: The file to analize
 *  @param[in] password: The codification number
 *  @param[in] name_file: The name of the file created in the function
 *  @return The file created in the function
 */
std::ofstream EncryptedXor(std::ifstream& file_input, std::string password, std::string name_file) {
  std::ofstream file_created;
  std::string line_seleccionated;
  file_created.open("text.txt");
  const int kKey = 128;
  for (size_t i{0}, lenght_password = password.size(); i < lenght_password; ++i) {
    password[i] = (password[i] ^ kKey);
  }
  while (getline(file_input, line_seleccionated)) {
    int firts_value, second_value, operation_value;
    int position;
    for (int i{0}, length_line = line_seleccionated.size(); i < length_line; ++i) {
      firts_value = int (line_seleccionated[i]);
      /// Calculate the index of the key
      position = i % password.length();
      second_value = int (password[position]);
      /// Xor Operation
      operation_value = (firts_value ^ second_value);
      /// Save the encrypted char
      file_created << char(operation_value);
    }
    file_created << "\n";
  }
  const char* file_name_changed = name_file.c_str();
  rename("text.txt", file_name_changed);
  return file_created;
}

/** Encrypted Caesar Function
 * This function encrypts the entered file where the encoding is as follows:
 * if a letter in the text to be encoded is the N-th letter of the alphabet,
 * replace that letter with the (N + K) -th letter of the alphabet.
 *
 *  @param[in] file_input: The file to analize
 *  @param[in] password: The codification number
 *  @param[in] name_file: The name of the file created in the function
 *  @return The file created in the function
 */
std::ofstream EncryptedCaesar(std::ifstream& file_input, int password, std::string name_file) {
  std::ofstream file_created;
  std::string line_selccionated;
  file_created.open("file.txt");
  while (getline(file_input, line_selccionated)) {
    char letter_seleccionated;
    int num_ascii;
    for (size_t i{0}, lenght_line = line_selccionated.size(); i < lenght_line; ++i) {
      letter_seleccionated = line_selccionated[i];
      num_ascii = letter_seleccionated;
      if ((num_ascii <= 90) && (num_ascii >= 65)) {
        num_ascii += password;
        if (num_ascii < 65) {
          num_ascii += 26;
        }
        if (num_ascii > 90) {
          num_ascii -= 26;
        }
        letter_seleccionated = num_ascii;
        file_created << letter_seleccionated;
      } else if ((num_ascii <= 122) && (num_ascii >= 97)) {
        num_ascii += password;
        if (num_ascii < 97) {
          num_ascii += 26;
        }
        if (num_ascii > 122) {
          num_ascii -= 26;
        }
        letter_seleccionated = num_ascii;
        file_created << letter_seleccionated;
      } else {
        num_ascii += password;
        letter_seleccionated = num_ascii;
        file_created << letter_seleccionated;
      }
    }
    file_created << std::endl;
  }
  const char* file_name_changed = name_file.c_str();
  rename("file.txt", file_name_changed);
  return file_created;
}