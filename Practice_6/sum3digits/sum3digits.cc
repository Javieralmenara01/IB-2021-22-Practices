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

// Declaración de función 
int sumaTresUltimosDigitos (int numero_introducido);

int main() {
  std::cout << "Este programa calcula la suma de los tres ultimos digitos de un numero dado." << std::endl;
  std::cout << "Introduce un número: ";
  int numero_introducido;
  std::cin >> numero_introducido;
  int suma_total = sumaTresUltimosDigitos(numero_introducido);
  std::cout << "La suma es: " << suma_total << std::endl;
  return 0;
}

// Definición de función 
int sumaTresUltimosDigitos (int numero_introducido) {
  int num_ultimo = (numero_introducido % 10);
  int num_penultimo = ((numero_introducido/10) % 10);
  int num_antepenultimo = (((numero_introducido / 10) / 10) % 10);
  int suma_total = (num_ultimo + num_penultimo + num_antepenultimo);
  return suma_total;
}