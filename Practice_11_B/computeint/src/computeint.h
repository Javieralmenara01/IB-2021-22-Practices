/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief ComputeInt class Definition
 */

#include <iostream>
#ifndef COMPUTEINT_H
#define COMPUTEINT_H

/// Cabría la posibilidad usar una Struct debido a que todo es publico
/**
 * @brief ComputeInt type
 */
class ComputeInt {
 public:
 int Factorial(const int numero);
 int SumSerie(const int numero);
 bool IsPerfect(const int numero);
 bool IsPrime(const int numero);
 bool IsPerfectPrime(const int numero);
 bool IsBalanced(const int numero);
 bool AreRelativePrimes(const int num1, const int num2);
};

#endif