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

// Declaración de función 
int sumaTodosDigitos (int numero_introducido);

int main() {
  std::cout << "Este programa calcula la suma de todos los  digitos de un numero dado." << std::endl;
  std::cout << "Introduce un número: ";
  int numero_introducido;
  std::cin >> numero_introducido;
  int suma_total = sumaTodosDigitos(numero_introducido);
  std::cout << "La suma es: " << suma_total << std::endl;
  return 0;
}

// Definición de función 
int sumaTodosDigitos (int numero_introducido) {
  int cociente; // Cociente de la división realizada para obtener los números de forma independiente
  int resto{1}; // Resto de la división realizada para obetener los números de forma independiente
  std::vector <int> digitos;
  while (resto > 0) {
    resto = (numero_introducido % 10);
    cociente = (numero_introducido / 10);
    digitos.emplace_back(resto);
    numero_introducido = cociente;
  }
  int contador;
  int suma_total{0};
  for (contador = 0; digitos.size() > contador; ++contador) {
    suma_total = (suma_total + (digitos[contador]));
  }
  return suma_total;
}