/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date 28 Oct 2021
 * @brief 
 *
 */

#include <iostream>
#include <cmath>
#include <float.h>

int main() {
  std::cout << "Este programa muestra el resultado tras la utilización de diferentes operadores aritmeticos." << std::endl << std::endl;
  // Operaciones con enteros
  std::cout << "Primero operaremos con variables de tipo entero." << std::endl;
  std::cout << "Introduce un numero que utilizaremos para realizar las operaciones." << std::endl;
  int numero_entero_1;
  std::cin >> numero_entero_1;
  std::cout << "Introduce otro numero que utilizaremos para realizar las operaciones." << std::endl;
  int numero_entero_2;
  std::cin >> numero_entero_2;
  std::cout << "Operaciones con operadores aritmeticos" << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " + " << numero_entero_2 << " es " << (numero_entero_1 + numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " - " << numero_entero_2 << " es " << (numero_entero_1 - numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " * " << numero_entero_2 << " es " << (numero_entero_1 * numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " / " << numero_entero_2 << " es " << (numero_entero_1 / numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " % " << numero_entero_2 << " es " << (numero_entero_1 % numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " & " << numero_entero_2 << " es " << (numero_entero_1 & numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " | " << numero_entero_2 << " es " << (numero_entero_1 | numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " ^ " << numero_entero_2 << " es " << (numero_entero_1 ^ numero_entero_2) << std::endl << std::endl;
  std::cout << "Operaciones con operadores de comparacion, tenga en cuenta que al mostrar el 0 el enunciado sería falso, y el 1 cierto" << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " < " << numero_entero_2 << " es " << (numero_entero_1 < numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " > " << numero_entero_2 << " es " << (numero_entero_1 > numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " <= " << numero_entero_2 << " es " << (numero_entero_1 <= numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " >= " << numero_entero_2 << " es " << (numero_entero_1 >= numero_entero_2) << std::endl;
  std::cout << "El resultado de operar " << numero_entero_1 << " == " << numero_entero_2 << " es " << (numero_entero_1 == numero_entero_2) << std::endl << std::endl;
  // Operaciones con decimales
  std::cout << "Primero operaremos con variables de tipo decimal." << std::endl;
  std::cout << "Introduce un numero que utilizaremos para realizar las operaciones." << std::endl;
  double numero_decimal_1;
  std::cin >> numero_decimal_1;
  std::cout << "Introduce otro numero que utilizaremos para realizar las operaciones." << std::endl;
  double numero_decimal_2;
  std::cin >> numero_decimal_2;
  std::cout << "Operaciones con operadores aritmeticos" << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " + " << numero_decimal_2 << " es " << (numero_decimal_1 + numero_decimal_2) << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " - " << numero_decimal_2 << " es " << (numero_decimal_1 - numero_decimal_2) << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " * " << numero_decimal_2 << " es " << (numero_decimal_1 * numero_decimal_2) << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " / " << numero_decimal_2 << " es " << (numero_decimal_1 / numero_decimal_2) << std::endl << std::endl;
  std::cout << "Operaciones con operadores de comparacion, tenga en cuenta que al mostrar el 0 el enunciado sería falso, y el 1 cierto" << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " < " << numero_decimal_2 << " es " << (numero_decimal_1 < numero_decimal_2) << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " > " << numero_decimal_2 << " es " << (numero_decimal_1 > numero_decimal_2) << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " <= " << numero_decimal_2 << " es " << (numero_decimal_1 <= numero_decimal_2) << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " >= " << numero_decimal_2 << " es " << (numero_decimal_1 >= numero_decimal_2) << std::endl;
  std::cout << "El resultado de operar " << numero_decimal_1 << " == " << numero_decimal_2 << " es " << (fabs(numero_decimal_1 / numero_decimal_2) <= FLT_EPSILON) << std::endl;
  return 0;
}
