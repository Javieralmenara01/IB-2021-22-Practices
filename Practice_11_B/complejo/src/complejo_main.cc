/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara 
 * @date Dec 20 2021
 * @brief clase Complejo
 *        este es un programa cliente que usa la clase
 */

#include <iostream>
#include "complejo.h"

/*
 * @brief Function Main
 */
int main() {
  Complejo complejo1{4, 5}, complejo2{7, -8};
  Complejo resultado;
  resultado = complejo1 + complejo2;
  std::cout << resultado << std::endl;
  resultado = complejo1 - complejo2;
  std::cout << resultado << std::endl;
  resultado = complejo1 * complejo2;
  std::cout << resultado << std::endl;
  resultado = complejo1 / complejo2;
  std::cout << resultado << std::endl;
  Complejo complejo3{-7, 4};
}