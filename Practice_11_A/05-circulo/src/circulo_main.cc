/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 16 2021
 * @brief clase 
 *        este es un programa cliente que usa la clase Circulo
 *
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <vector>

#include "circulo.h"

int main() {
  Circulo circulo{4, 7, 2.5};
  circulo.Print();
  std::cout << "Area: " << circulo.Area() << "\n";
  std::cout << "Perimetro: " << circulo.Perimetro() << "\n";
  return 0;
}