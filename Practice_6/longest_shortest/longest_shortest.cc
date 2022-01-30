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
#include <vector>
#include <string>

int main () {
  std::cout << "Este programa introduce una cantidad n de palabras, donde n es dado por el usuario" << std::endl;
  int numero_de_palabras;
  std::cout << "Introduza un numero: "; 
  std::cin >> numero_de_palabras;
  int contador{0}; // La variable contador se crea con el fin de realizar un numero n de iteraciones
  std::string palabra_mayor;
  std::string palabra_menor;
  while (contador < numero_de_palabras) {
    std::string palabra_introducida;
    std::cout << "Escriba una palabra:" << std::endl;
    std::cin >> palabra_introducida;
    // Realizamos la busqueda de la palabra mayor y menor mediante estructuras de control
    if (contador == 0) {
      palabra_menor = palabra_introducida;
    }
    if ((palabra_introducida.length() > 0) && (palabra_mayor.length() < palabra_introducida.length())){
      palabra_mayor = palabra_introducida;
    }
    if ((palabra_introducida.length() > 0) && (palabra_menor.length() > palabra_introducida.length())){
      palabra_menor = palabra_introducida;
    }
    ++contador;
  }
  std::cout << "La palabra mas larga es " << palabra_mayor << std::endl;
  std::cout << "La palabra mas corta es " << palabra_menor << std::endl;
  return 0;
}
