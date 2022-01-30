/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 17 2021
 * @brief Calcula class Implementation
 * 
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

#include "calcula.h"

/** 
 * @brief Calcula el número factorial de un numero dado
 */
int Calcula::Factorial(int num_entered) {
  for (int i = (num_entered - 1); i > 0; --i) {
    num_entered *= i;
  }
  return num_entered;
}

/** 
 * @brief Calcula la suma regeresiva de todos los números de un número introducido
 */
int Calcula::Suma(int num_entered) {
  for (int i = (num_entered - 1); i > 0; --i) {
    num_entered += i;
  }
  return num_entered;
}

/** 
 * @brief Muestra si el numero introducido es primo o no
 */
bool Calcula::EsPrimo(const int num_entered) {
  for (int i = (num_entered - 1); i >= sqrt(num_entered); --i) {
    if ((num_entered % i) == 0) {
      return false;
    }
  }
  return true;
}

/** 
 * @brief Muestra si los numeros introducidos son primos o no
 */
bool Calcula::SonPrimosRelativos(const int num_entered_1, const int num_entered_2) {
  int num_to_begin;
  if (num_entered_1 > num_entered_2) {
    num_to_begin = num_entered_2;
  } else {
    num_to_begin = num_entered_1;
  }
  for (int i = num_to_begin; i > 1; --i) {
    if (((num_entered_1 % i) == 0) && ((num_entered_2 % i) == 0)) {
      return false;
    }
  }
  return true;
}

/** 
 * @brief Calcula las tablas de multiplicar de un numero dado
 */
void Calcula::TablasMultiplicar(const int num_entered) {
  std::cout << "Tabla de Multiplicar del número: " << num_entered << "\n";
  for (int i = 0; i < 10; ++i) {
    std::cout << num_entered << " x " << i << " : " << (num_entered * i) << "\n";
  }
}

/** 
 * @brief Introduce en un fichero todos los
 */
void Calcula::TodasTablasMultiplicar() {
  std::ofstream file_created;
  file_created.open("TablasDeMultiplicar.txt");
  file_created << "Todas las tablas de Multiplicar\n";
  for (int i{1}; i < 10; ++i) {
    file_created << "· Tabla de Multiplicar del número: " << i << "\n";
    for (int iterations = 0; iterations < 10; ++iterations) {
      file_created << i << " x " << iterations << " : " << (i * iterations) << "\n";
    }
  }
}