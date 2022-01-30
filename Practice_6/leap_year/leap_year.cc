/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date 6 Nov 2021
 * @brief 
 *
 */

#include <iostream>

int main () {
  std::cout << "Este programa te dice si un año es o no bisiesto." << std::endl;
  int year;
  std::cout << "Introduce un año: ";
  std::cin >> year;
  if (((year % 4 == 0) && (!(year % 100 == 0))) || (((year % 100) % 4) == 0)) {
    std::cout << "Si" << std::endl;
  } else {
      std::cout << "No" << std::endl;
  }
  return 0;
}
