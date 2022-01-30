/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief Complejo class Implementation
 */

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>

#include "complejo.h"

/*
 * @brief Complejo Operator>>
 */
std::istream& operator>>(std::istream& in, Complejo& complejo) {
  in >> complejo.real_;
  in >> complejo.imag_;
  return in;
}

/*
 * @brief Complejo Operator<<
 */
std::ostream& operator<<(std::ostream& out, const Complejo& complejo) {
  if (complejo.imag() >= 0) {
    out << "(" << complejo.real() << "+" << complejo.imag() << "i)";
  } else {
    out << "(" << complejo.real() << complejo.imag() << "i)";
  }
  return out;
}

/*
 * @brief Complejo Operator+
 */
Complejo operator+(const Complejo& complejo1, const Complejo& complejo2) {
  Complejo result{complejo1.real() + complejo2.real(), complejo1.imag() + complejo2.imag()};
  return result;
}

/*
 * @brief Complejo Operator-
 */
Complejo operator-(const Complejo& complejo1, const Complejo& complejo2) {
  Complejo result{complejo1.real() - complejo2.real(), complejo1.imag() - complejo2.imag()};
  return result;
}

/*
 * @brief Complejo Operator*
 */
Complejo operator*(const Complejo& complejo1, const Complejo& complejo2) {
  Complejo result{(complejo1.real() * complejo2.real()) - (complejo1.imag() * complejo2.imag()), 
                  (complejo1.real() * complejo2.imag()) + (complejo1.imag() * complejo2.real())};
  return result;
}

/*
 * @brief Complejo Operator/
 */
Complejo operator/(const Complejo& complejo1, const Complejo& complejo2) {
    Complejo result{((complejo1.real() * complejo2.real()) + (complejo1.imag() * complejo2.imag())) /
                  ((complejo2.real() * complejo2.real()) + (complejo2.imag() * complejo2.imag())), 
                  ((complejo1.imag() * complejo2.real()) - (complejo2.real() * complejo2.imag())) /
                  ((complejo2.real() * complejo2.real()) + (complejo2.imag() * complejo2.imag()))};
    return result;
  }

/*
 * @brief Complejo Operator==
 */
bool operator==(const Complejo& complejo1, const Complejo& complejo2) {
  if ((complejo1.real() == complejo2.real()) && (complejo1.imag() == complejo2.imag())) {
    return true;
  } else {
    return false;
  }
}
/*
 * @brief Complejo Modulo
 */
double Complejo::modulo() const {
  return sqrt((real() * real()) + (imag() * imag()));
}