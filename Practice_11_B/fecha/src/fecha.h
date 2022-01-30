/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief Fecha class Definition
 */

#include <iostream>
#include <fstream>
#ifndef VECTOR_H
#define VECTOR_H

/**
 * @brief Fecha type
 */
class Fecha {
 public:
  Fecha() : day_{01}, month_{01}, year_{0000} {}
  Fecha(const int day, const int month, const int year);
  /// Getters
  int day() const { return day_; }
  int month() const { return month_; }
  int year() const { return year_; }
  void Imprimir() const;
  Fecha PosponerDias(const int num_days);
  friend bool operator>(const Fecha& fecha1, const Fecha& fecha2);
  friend bool operator<(const Fecha& fecha1, const Fecha& fecha2);
  friend bool operator==(const Fecha& fecha1, const Fecha& fecha2);
  friend std::istream& operator>>(std::istream& in, Fecha& fecha);
  friend std::ostream& operator<<(std::ostream& out, const Fecha& fecha); 
  bool LeapYear(const Fecha& fecha);
 private:
  int day_;
  int month_;
  int year_;
};

void Usage(int argc, char** argv);
std::string ChangeLines(const std::string& fecha_cadena);
void CreateFile(const int num_iterations, const Fecha& fecha, const char* argv);
bool IsValidDate(const Fecha& fecha);
#endif