/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 16 2021
 * @brief Point2D class Implementation
 * 
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <string>
#include <cmath>

#include "point_2d.h"

/** 
 * @brief constructor
 */
Point2D::Point2D(const double x_position, const double y_position) 
                : x_postion_{x_position}, y_position_{y_position} {
}

/** 
 * @brief Muestra las coordenadas del vector
 */
void Point2D::Show() const {
  std::cout << "Coordenadas del vector: (" << x_position()
  << " ," << y_position() << ")" << std::endl;
}

/** 
 * @brief Mueve el punto de posición
 * @param[in] x_position: double posicion en el eje x
 * @param[in] y_position: double posicion en el eje y
 */
void Point2D::Move(const double x_position, const double y_position) {
  x_postion_ = x_position;
  y_position_ = y_position;
}

/** 
 * @brief Muestra las coordenadas del vector
 * @param[in] point_1: punto 1
 * @param[in] point_2: punto 2
 * @return the value with the distance
 */
double Point2D::Distance(const Point2D& point_1, const Point2D& point_2) {
  return (sqrt(pow((point_2.x_position() - point_1.x_position()), 2) + pow((point_2.y_position() - point_1.y_position()), 2)));
}

/** 
 * @brief Determina el punto medio entre dos puntos
 * @param[in] point_1: punto 1
 * @param[in] point_2: punto 2
 */
void Point2D::Middle(const Point2D& point_1, const Point2D& point_2) {
  x_postion_ = ((point_1.x_position() + point_2.x_position()) / 2);
  y_position_ = ((point_1.y_position() + point_2.y_position()) / 2);
}