/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date 28 Oct 2021
 * @brief 
 */


#include <iostream>
#include <string>

int main() {
  int numero_entero(3);
  int& entero = numero_entero;
  double numero_decimal{7.3};
  double& decimal = numero_decimal;
  std::string cadena_caracteres = "Hola!";
  std::string& caracteres = cadena_caracteres;
  char caracter_unico = 'a';
  char& caracter = caracter_unico;
  std::cout << "El valor de la referencia del tipo int es " << entero << std::endl;
  std::cout << "El valor de la referencia del tipo double es " << decimal << std::endl;
  std::cout << "El valor de la referencia del tipo caracteres es " << caracteres << std::endl;
  std::cout << "El valor de la referencia del tipo caracter es " << caracter << std::endl;
  return 0;
}
