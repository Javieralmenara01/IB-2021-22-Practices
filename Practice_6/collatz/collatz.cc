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

int main () {
  std::cout << "Este programa realiza la conjetura de Collatz, mostrando todos los numeros hasta llegar a 1" << std::endl;
  std::vector<int> listaDeNumeros;
  int num_a_operar;
  std::cout << "Introduce un número: ";
  std::cin >> num_a_operar;
  listaDeNumeros.push_back(num_a_operar);
  while (num_a_operar > 1) {
    if (num_a_operar % 2 == 0) {
      num_a_operar = num_a_operar / 2;
      listaDeNumeros.push_back(num_a_operar);
    } else {
      num_a_operar = ((num_a_operar * 3) + 1);
      listaDeNumeros.push_back(num_a_operar);
    }
  }
  int contador; // La variable contador es creada para mostrar realizar un número n de iteraciones
  for (contador = 0; listaDeNumeros.size() > contador; ++contador) {
    std::cout << " " << listaDeNumeros[contador];
  } 
  std::cout << std::endl;
  return 0;
}
