/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 16 2021
 * @brief clase Point2D
 *        este es un programa cliente que usa la clase Point2D
 *
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <vector>

#include "point_2d.h"

int main() {
  Point2D punto_1{2, 3};
  Point2D punto_2{4, 6};
  punto_1.Show();
  punto_2.Show();
  punto_1.Move(3, 2);
  punto_1.Show();
  Point2D distancia;
  std::cout << "Distancia: " << distancia.Distance(punto_1, punto_2) << "\n";
  Point2D punto_medio;
  punto_medio.Middle(punto_1, punto_2);
  punto_medio.Show();
  return 0;
}