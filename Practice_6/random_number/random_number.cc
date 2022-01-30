/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenar
 * @date 6 Nov 2021
 * @brief 
 *
 */

#include <ctime>
#include <experimental/random>
#include <iostream>

int main () {
  std::cout << "Este programa calcula un numero aleatorio de un intervalo." << std::endl;
  int num_inicial; // Número inicial que define el intervalo
  std::cout << "Introduce el primer numero del intervalo: "; 
  std::cin >> num_inicial;
  int num_final; // Número final que define el intervalo
  std::cout << "Introduce el ultimo numero del intervalo: ";
  std::cin >> num_final;
  std::srand(std::time(NULL)); // Ayuda del tiempo para el cambio de semilla del generador aleatorio 
  if (num_inicial < num_final) {
    int numero_aleatorio = std::experimental::randint(num_inicial, num_final); 
    std::cout << "Un numero aleatorio podria ser: " << numero_aleatorio << std::endl;
  } else {
      std::cout << "El primer numero debe ser mayor que el ultimo" << std::endl;
    }
  return 0;
}
