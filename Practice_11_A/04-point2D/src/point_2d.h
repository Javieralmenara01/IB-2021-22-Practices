/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date Dec 14 2021
 * @brief Point2D class Definition
 *
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 */

#ifndef POINT2D_H
#define POINT2D_H

#include <cmath>
#include <string>
#include <vector>

/**
 * Clase Point2D. 
 *       Representa un vector en 2D usando sus componentes
 */
class Point2D {
 public:
  Point2D() = default;
  /// Estos identificadores representan la posición en el eje OX y en el eje OY
  Point2D(const double x_position, const double y_position);
  double x_position() const { return x_postion_; }     /// Getter
  double y_position() const { return y_position_; }    /// Getter
  void Show() const;
  void Move(const double x_position, const double y_position);
  double Distance(const Point2D& point_1, const Point2D& point_2);
  void Middle(const Point2D& point_1, const Point2D& point_2);
 private:
  double x_postion_;
  double y_position_;
};



#endif