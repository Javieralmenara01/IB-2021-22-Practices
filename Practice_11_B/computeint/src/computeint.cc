/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief Vector class Implementation
 */

#include <cmath>
#include <iostream>
#include <vector>

#include "computeint.h"

/**
 * @brief ComputeInt Factorial 
 * @param[in] numero: entero (constante) al numero a operar
 */
int ComputeInt::Factorial(const int numero) {
  int result = 1;
  for (int i = numero; i > 0; --i) {
    result *= i;
  }
  return result;
}

/**
 * @brief ComputeInt SumSerie
 * @param[in] numero: entero (constante) al numero a operar
 */
int ComputeInt::SumSerie(const int numero) {
  int result = 0;
  for (int i = numero; i > 0; --i) {
    result += i;
  }
  return result;
}

/**
 * @brief ComputeInt IsPerfect 
 * @param[in] numero: entero (constante) al numero a analizar
 */
bool ComputeInt::IsPerfect(const int numero) {
  int result_num{0};
  for (int i = numero - 1; i > 0; --i) {
    if (numero % i == 0) {
      result_num += i;
    }
  }
  if ((result_num == numero) && (numero != 0)){
    return true;
  } else {
    return false;
  }
}

/**
 * @brief ComputeInt IsPrime 
 * @param[in] numero: entero (constante) al numero a analizar
 */
bool ComputeInt::IsPrime(const int numero) {
  for (int i = numero - 1; i >= sqrt(numero); --i) {
    if (numero % i == 0) {
      return false;
    }
  }
  return true;
}

/**
 * @brief ComputeInt IsPerfectPrime 
 * @param[in] num: entero (constante) al numero a analizar
 */
bool ComputeInt::IsPerfectPrime(int num) {
  while (true) {
    if (num == 1) {
      return false;
    }
    for (int i = num - 1; i >= sqrt(num); --i) {
      if (num % i == 0) {
        return false;
      }
    }
    int remainder{0}, quotient{0}, num_result;
    if (num == num_result) {
      break;
    }
    std::vector<int> numbers_digits;
    while (num > 0 ) {
      remainder = (num % 10);
      quotient = (num/ 10);
      numbers_digits.emplace_back(remainder);
      num = quotient;
    }
    num_result = 0;
    for (size_t i = 0, lenght_vector = numbers_digits.size(); i < lenght_vector; ++i) {
      num_result += numbers_digits[i];
    }
    num = num_result;
  }
  return true;
}

/**
 * @brief ComputeInt IsBalanced
 * @param[in] numero: entero (constante) al numero a analizar
 */
bool ComputeInt::IsBalanced(const int numero) {
  int remainder{0}, quotient{0}, even_digits{0}, odd_digits{0}, num{numero};
  std::vector<int> numbers_digits;
  while (num > 0 ) {
    remainder = (num % 10);
    quotient = (num/ 10);
    numbers_digits.emplace_back(remainder);
    num = quotient;
  }
  for (size_t i{0}, length_vector = numbers_digits.size(); i < length_vector; i += 2) {
    even_digits += numbers_digits[i];
  }
  for (size_t i{1}, length_vector = numbers_digits.size(); i < length_vector; i += 2) {
    odd_digits += numbers_digits[i];
  }
  if (even_digits == odd_digits) {
    return true;
  } else {
    return false;
  }
}

/**
 * @brief ComputeInt AreRelativePrimes
 * @param[in] num1: entero (constante) al numero a analizar
 * @param[in] num2: entero (constante) al numero a analizar
 */
bool ComputeInt::AreRelativePrimes(const int num1, const int num2) {
  int num_to_begin;
  if (num1 > num2) {
    num_to_begin = num2;
  } else {
    num_to_begin = num1;
  }
  for (int i = num_to_begin; i > 1; --i) {
    if (((num1 % i) == 0) && ((num2 % i) == 0)) {
      return false;
    }
  }
  return true;
}