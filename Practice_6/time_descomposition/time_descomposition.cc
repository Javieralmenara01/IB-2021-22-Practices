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
  std::cout << "Este programa descompone en segundo, minutos y horas un numero dado." << std::endl;
  int numero_introducido;
  std::cout << "Introduce un numero: ";
  std::cin >> numero_introducido;
  int horas = (numero_introducido / 3600);
  int resto = (numero_introducido % 3600);
  int minutos = (resto / 60);
  int segundos = (resto % 60);
  std::cout << "El valor corresponde a " << horas << "h " << minutos << "m " << segundos << "s."<< std::endl;
  return 0;
}
