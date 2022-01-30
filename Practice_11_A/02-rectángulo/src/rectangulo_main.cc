/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 14 2021
 * @brief clase Rectangulo
 *        este es un programa cliente que usa la clase Rectangulo
 *
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>

#include "rectangulo.h"
 
int main() {
  Rectangulo rectangulo{2, 1};
  rectangulo.Display();
}