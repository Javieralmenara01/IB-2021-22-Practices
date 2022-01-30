/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief Complejo class Definition
 */

#include <iostream>

#ifndef COMPLEJO_H
#define COMPLEJO_H

/**
 * @brief Complejo type
 */
class Complejo {
 public:
  Complejo() : real_{0}, imag_{0} {}
  Complejo(const double real, const double imag) : real_{real}, imag_{imag} {}
  /// Getters
  double real() const { return real_; } 
  double imag() const { return imag_; }
  friend std::ostream& operator<<(std::ostream& out, const Complejo& complejo);
  friend std::istream& operator>>(std::istream& in, Complejo& complejo);
  friend bool operator==(const Complejo& complejo1, const Complejo& complejo2);
  double modulo() const;
 private:
  double real_;
  double imag_;
};
/// Se necesita definir el prototipo de operator+ para poder usar esa función en otros ficheros
/// (para que se sepa que esa sobrecarga está definida)
Complejo operator+(const Complejo& complejo1, const Complejo& complejo2);
Complejo operator-(const Complejo& complejo1, const Complejo& complejo2);
Complejo operator*(const Complejo& complejo1, const Complejo& complejo2);
Complejo operator/(const Complejo& complex1, const Complejo& complex2);

#endif