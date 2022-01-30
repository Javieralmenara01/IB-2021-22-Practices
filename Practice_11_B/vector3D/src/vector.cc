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

#include <iostream>
#include <cmath>

#include "vector.h"

/*
 * @brief vector addition 
 * @param[in] vector1: referencia (constante) al primer sumando
 * @param[in] vector2: referencia (constante) al segundo sumando
 */
Vector operator+(const Vector& vector1, const Vector& vector2) {
  Vector result{vector1.x() + vector2.x(), vector1.y() + vector2.y(), vector1.z() + vector2.z()};
  return result;
}

/*
 * @brief vector imprimir 
 */
void Vector::Imprimir() const {
  std::cout << "Vector (" << x() << ", " << y() << ", " << z() << ")\n"; 
}

/*
 * @brief show vector  
 * @param[in] out: referencia al flujo de salida
 * @param[in] vector2: referencia (constante) al vector
 */
std::ostream& operator<<(std::ostream& out, const Vector& vector) {
  out << "(" << vector.x() << ", " << vector.y() << ", " << vector.z() << ")"; 
  return out;
}

/*
 * @brief vector producto scalar product 
 * @param[in] vector1: referencia (constante) al primer factor
 * @param[in] vector2: referencia (constante) al segundo factor
 */
double operator*(const Vector& vector1, const Vector& vector2) {
  return ((vector1.x() * vector2.x()) + (vector1.y() * vector2.y()) + (vector1.z() * vector2.z()));
}

/*
 * @brief vector multiplicaction for lamda
 * @param[in] vector1: referencia (constante) al primer factor
 * @param[in] lamda: entero (constante) al segundo factor
 */
Vector operator*(const Vector& vector, const int lamda) {
  Vector result{vector.x() * lamda, vector.y() * lamda, vector.z() * lamda};
  return result;
}

/*
 * @brief Calcular Modulo del Vector
 */
double Vector::Modulo(){
  return (sqrt((x() * x()) + (y() * y()) + (z() * z())));
}

/*
 * @brief vector igualation
 * @param[in] vector1: referencia (constante) al primer vector
 * @param[in] vector2: referencia (constante) al segundo vector
 */
bool operator==(const Vector& vector1, const Vector& vector2) {
  if (((vector1.x() == vector2.x()) && (vector1.y() == vector2.y())) && (vector1.z() && vector2.z())) {
    return true;
  } else {
    return false;
  }
}

/*
 * @brief Calcular Modulo del Vector
 */
void Vector::Normalizar() {
  x_ = x() / Modulo();
  y_ = y() / Modulo();
  z_ = z() / Modulo();
}