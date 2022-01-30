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
  std::cout << "Este programa calcula todos los divisores de un número dado." << std::endl;
  int numero_divisores; // Esta variable hace referencia al número del que se extraeran sus divisores
  int contador{0}; // La variable contador empieza en dos hasta el numero introducido, con el fin de realizar un numero n de iteraciones
  std::cout << "Introduzca un numero" << std::endl;
  std::cin >> numero_divisores;
  std::cout << "Los divisores de " << numero_divisores << " son : ";
  while (contador <= numero_divisores) {
    ++contador;
    if ((numero_divisores % contador) == 0) {
      std::cout << contador << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}
