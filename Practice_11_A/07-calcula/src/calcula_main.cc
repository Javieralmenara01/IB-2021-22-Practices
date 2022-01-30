/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 17 2021
 * @brief clase 
 *        este es un programa cliente que usa la clase Calcula
 *
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <vector>

#include "calcula.h"

int main() {
  Calcula Calcula;
  std::cout << Calcula.Factorial(6) << std::endl;
  std::cout << Calcula.Suma(100) << std::endl;
  std::cout << Calcula.EsPrimo(13) << std::endl;
  std::cout << Calcula.SonPrimosRelativos(7, 8) << std::endl;
  Calcula.TablasMultiplicar(3);
  Calcula.TodasTablasMultiplicar();
  return 0;
}