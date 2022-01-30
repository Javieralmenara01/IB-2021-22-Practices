/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief clase ComputeInt
 *        este es un programa cliente que usa la clase 
 *
 */

#include <iostream>

#include "computeint.h"
 
int main() {
  ComputeInt computation; 
  std::cout << computation.Factorial(5) << std::endl; 
  std::cout << computation.SumSerie(100) << std::endl;
  std::cout << computation.IsPerfect(28) << std::endl; 
  std::cout << computation.IsPrime(13) << std::endl; 
  std::cout << computation.IsBalanced(1463) << std::endl;
  std::cout << computation.AreRelativePrimes(14, 25) << std::endl;
  return 0;
}