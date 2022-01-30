/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Jan 6 2021
 * @brief Racional class Definition
 */

#include <iostream>
#include <fstream>

#ifndef RACIONAL_H
#define RACIONAL_H

/**
 * @brief Racional type
 */
class Racional {
 public:
  Racional() : numerador_{0}, denominador_{1} {}
  Racional(const int numerador, const int denominador) : numerador_{numerador}, denominador_{denominador} {}
  /// Getters
  int numerador() const { return numerador_; }
  int denominador() const { return denominador_; }
  friend std::istream& operator>>(std::istream& in, Racional& racional);
  friend std::ifstream& operator>>(std::ifstream& fin, Racional& racional);
  friend std::ostream& operator<<(std::ostream& out, const Racional& racional);
  friend std::ofstream& operator<<(std::ofstream& fout, const Racional& racional);
  friend bool operator<(const Racional& racional1, const Racional& racional2);
  friend bool operator>(const Racional& racional1, const Racional& racional2);
  friend bool operator==(const Racional& racional1, const Racional& racional2);
  friend bool operator!=(const Racional& racional1, const Racional& racional2);
  Racional Simplificar();
 private:
  int numerador_;
  int denominador_;
};
void Usage(int argc, char** argv);
void CreateFile();
std::fstream ChangeLines(std::istream& file_input);
Racional operator+(const Racional& racional1, const Racional& racional2);
Racional operator-(const Racional& racional1, const Racional& racional2);
Racional operator*(const Racional& racional1, const Racional& racional2);
Racional operator/(const Racional& racional1, const Racional& racional2);
#endif