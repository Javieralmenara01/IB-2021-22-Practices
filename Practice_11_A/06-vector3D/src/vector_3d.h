/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date Dec 15 2021
 * @brief Vector3D class Definition
 *
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 */

#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <cmath>
#include <string>
#include <vector>

/**
 * Clase Vector3D. 
 *       Representa un vector en 2D usando sus componentes
 */
class Vector3D {
 public:
  Vector3D() = default;
  Vector3D(const double x_position, const double y_position, const double z_position);
  /// Getters
  double x_position() const { return x_position_; }
  double y_position() const { return y_position_; }
  double z_position() const { return z_position_; }
  void Imprimir();
  void Suma(Vector3D& vector_1, Vector3D& vector_2);
  void MultiplicacionReal(Vector3D& vector_1, const double lamda);
  double ProductoEscalar(Vector3D& vector_1, Vector3D& vector_2);
  double Modulo();
  void Normalizar();
 private:
  double x_position_;
  double y_position_;
  double z_position_;
};

#endif