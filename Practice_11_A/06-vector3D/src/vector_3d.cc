/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 16 2021
 * @brief Vector3D class Implementation
 * 
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <string>
#include <cmath>

#include "vector_3d.h"

/** 
 * @brief constructor
 */
Vector3D::Vector3D(const double x_position, const double y_position, const double z_position) 
                  : x_position_{x_position}, y_position_{y_position}, z_position_{z_position} {
}

/** 
 * @brief Impresion de componentes de un vector
 */
void Vector3D::Imprimir() {
  std::cout << "Vector: (" << x_position() << ", " << y_position() << ", " << z_position() << ")\n";
}

/** 
 * @brief Suma de Vectores
 */
void Vector3D::Suma(Vector3D& vector_1, Vector3D& vector_2) {
  x_position_ = vector_1.x_position() + vector_2.x_position();
  y_position_ = vector_1.y_position() + vector_2.y_position();
  z_position_ = vector_1.z_position() + vector_2.z_position();
}

/** 
 * @brief Multiplicacion de un vector por un parametro llamado lamda
 */
void Vector3D::MultiplicacionReal(Vector3D& vector_1, const double lamda) {
  x_position_ = vector_1.x_position() + lamda;
  y_position_ = vector_1.y_position() + lamda;
  z_position_ = vector_1.z_position() + lamda;
}

/** 
 * @brief Calcula el producto escalar de dos vectores
 */
double Vector3D::ProductoEscalar(Vector3D& vector_1, Vector3D& vector_2) {
  return ((vector_1.x_position() * vector_2.x_position()) + (vector_1.y_position() * vector_2.y_position())
          + (vector_1.z_position() + vector_2.z_position()));
}

/** 
 * @brief Cacula el modulo de un vector
 */
double Vector3D::Modulo() {
  return (sqrt((x_position() * x_position()) + (y_position() * y_position()) + (z_position() * z_position())));
}

/** 
 * @brief Normaliza un vector
 */
void Vector3D::Normalizar() {
  x_position_ = x_position() / Modulo();
  y_position_ = y_position() / Modulo();
  z_position_ = z_position() / Modulo();
}

