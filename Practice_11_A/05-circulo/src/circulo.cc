/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 16 2021
 * @brief Circulo class Implementation
 * 
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <string>
#include <cmath>

#include "circulo.h"

/** 
 * @brief constructor
 */
Circulo::Circulo(const double x_position, const double y_position, const double radius) 
                : x_positon_{x_position}, y_position_{y_position} ,radius_{radius} {
}

/** 
 * @brief Muestra los parametros de la clase Circulo
 */
void Circulo::Print() const {
  std::cout << "Centro: (" << x_position() << ", " << y_position() << ")" << " Radio: " << radius() << "\n";
}

/** 
 * @brief Calcula el Area del circulo
 */
double Circulo::Area() const {
  return (radius() * radius() * M_PI);
}

/** 
 * @brief Calcula el Perimetro del circulo
 */
double Circulo::Perimetro() const {
  return (radius() * 2 * M_PI);
}