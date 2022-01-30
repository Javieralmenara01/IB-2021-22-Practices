/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 13 2021
 * @brief Person class Definition
 *
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 */

#ifndef RECTANGULO_H
#define RECTANGULO_H

#include <string>

/**
 * Clase Rectangulo. 
 *       Representa un Rectangulo usando su anchura(o base), y altura
 */
class Rectangulo {
 public:
  Rectangulo() = default;
  Rectangulo(const double anchura, const double altura);
  
  double anchura() const { return anchura_; }   /// Getter
  double altura() const { return altura_; }     /// Getter
  double Area() const;
  double Perimetro() const;
  void Display() const;
 private:
  double anchura_;
  double altura_;
};

#endif
