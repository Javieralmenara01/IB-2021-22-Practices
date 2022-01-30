/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief Vector class Definition
 */

#include <iostream>
#ifndef VECTOR_H
#define VECTOR_H

/**
 * @brief Vector type
 */
class Vector {
 public:
  Vector() : x_{0.0}, y_{0.0}, z_{0.0} {
    /// std::cout << "Ejecutado el constructor por defecto de Vector." << std::endl;
  }       
  Vector(double x, double y, double z) : x_{x}, y_{y}, z_{z} {
    /// std::cout << "Ejecutado el constructor con parámetros de Vector." << std::endl;
  }
  double x() const { return x_; } /// Getters
  double y() const { return y_; }
  double z() const { return z_; }
  void Imprimir() const;
  double Modulo() const;
  void Normalizar();
  friend std::ostream& operator<<(std::ostream& out, const Vector& vector);
  friend bool operator==(const Vector& vector1, const Vector& vector2);
 private:
  double x_; /// The x component of vector
  double y_; /// The y component of vector
  double z_; /// The z component of vector
};

/// Se necesita definir el prototipo de operator+ para poder usar esa función en otros ficheros
/// (para que se sepa que esa sobrecarga está definida)
Vector operator+(const Vector& vector1, const Vector& vector2);
Vector operator*(const Vector& vector, const int lamda);
double operator*(const Vector& vector1, const Vector& vector2);
#endif