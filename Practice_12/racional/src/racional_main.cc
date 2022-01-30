/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara 
 * @date Dec 20 2021
 * @brief clase Racional
 *        este es un programa cliente que usa la clase
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include "racional.h"

/*
 * @brief Function Main
 */
int main(int argc, char** argv) {
  Usage(argc, argv);
  std::ifstream file_input(argv[1]);
  std::fstream new_file;
  new_file = ChangeLines(file_input);
  CreateFile();
  remove("text.txt");
  rename("created.txt", argv[2]);
  Racional racional1{3, 6};
  std::cout << racional1.Simplificar();
  return 0;
}