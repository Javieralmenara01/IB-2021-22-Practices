/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date Dec 17 2021
 * @brief Calcula class Definition
 *
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 */

#ifndef CALCULA_H
#define CALCULA_H

#include <cmath>
#include <string>
#include <vector>

/**
 * Clase Calcula. 
 *       Representa una clases Calcula que gestiona operaciones
 */
class Calcula {
 public:
  Calcula() = default;
  int Factorial(int num_entered);
  int Suma(int num_entered);
  bool EsPrimo(const int num_entered);
  bool SonPrimosRelativos(const int num_entered_1, const int num_entered_2);
  void TablasMultiplicar(const int num_entered);
  void TodasTablasMultiplicar();
};

#endif