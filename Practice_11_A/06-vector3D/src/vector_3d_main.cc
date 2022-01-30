/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 16 2021
 * @brief clase 
 *        este es un programa cliente que usa la clase Vector3D
 *
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <vector>

#include "vector_3d.h"

int main() {
  Vector3D vector_1{2, 2, 2}, vector_2{4, 4, 4};
  Vector3D vector_suma, vector_por_lamda;
  std::cout << "Vectores declarados: \n";
  vector_1.Imprimir();
  vector_2.Imprimir();
  std::cout << "Suma de Vectores 1 y 2: \n";
  vector_suma.Suma(vector_1, vector_2);
  vector_suma.Imprimir();
  std::cout << "Vector 1 por un parámetro: \n";
  vector_por_lamda.MultiplicacionReal(vector_1, 2);
  vector_por_lamda.Imprimir();
  std::cout << "Normalización de Vector 1: \n";
  vector_1.Normalizar();
  vector_1.Imprimir();
  return 0;
}