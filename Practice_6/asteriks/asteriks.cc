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
  std::cout << "Este programa muestra en arteriscos un numero dado." << std::endl;
  int numero_a_convertir;
  std::cout << "Introduce un número: ";
  std::cin >> numero_a_convertir;
  int cociente_division(1);
  while (!(cociente_division == 0)) {
    cociente_division = (numero_a_convertir / 10);
    std::cout << "*";
    numero_a_convertir = cociente_division;
  }
  std::cout << std::endl;
  return 0;
}
