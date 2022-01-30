/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date Dec 15 2021
 * @brief Circulo class Definition
 *
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 */

#ifndef CIRCULO_H
#define CIRCULO_H

#include <cmath>
#include <string>
#include <vector>

/**
 * Clase Circulo. 
 *       Representa un vector en 2D usando sus componentes
 */
class Circulo {
 public:
  Circulo() = default;
  Circulo(const double x_position, const double y_position, const double radius);
  /// Getters
  double x_position() const { return x_positon_; }
  double y_position() const { return y_position_; }
  double radius() const { return radius_; }
  void Print() const;
  double Area() const;
  double Perimetro() const;
 private:
  double x_positon_;
  double y_position_;
  double radius_;
};

#endif