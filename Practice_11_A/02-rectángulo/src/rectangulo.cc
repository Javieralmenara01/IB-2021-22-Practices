/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 14 2021
 * @brief Persona class Implementation
 *
 * @see https://www.learncpp.com/cpp-tutorial/89-class-code-and-header-files/
 */

#include <iostream>
#include <string>

#include "rectangulo.h"

/**
 * @brief constructor
 * @param[in] nombre: string con el nombre de la persona a crear
 */
Rectangulo::Rectangulo(const double anchura, const double altura) : anchura_{anchura}, altura_{altura}  {
  // std::cout << "Constructor rectangulo ejecutado" << std::endl;
}

/** Area función
 * @brief Calula el area del rectangulo
 * @return area calculada
 */
double Rectangulo::Area() const {
  return anchura() * altura();
}

/** Perimetro función
 * @brief Calula el perimetro del rectangulo
 * @return perimetro calculado
 */
double Rectangulo::Perimetro() const {
  return (2 * anchura() + 2 * altura());
}

/** Display función
 * @brief Muestra el area y perimetro calculados
 */
void Rectangulo::Display() const {
  std::cout << "Área: " << Area() << " Perímetro: " << Perimetro() << std::endl;
}
