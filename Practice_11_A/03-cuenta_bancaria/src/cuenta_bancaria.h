/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date Dec 14 2021
 * @brief CuentaBancaria class Definition
 *
 * @see https://www.learncpp.com/cpp-tutorial/header-guards/
 */

#ifndef CUENTABANCARIA_H
#define CUENTABANCARIA_H

#include <string>
#include <vector>

/**
 * Clase CuentaBancaria. 
 *       Representa una CuentaBancaria usando el número de cuenta, saldo 
 *       y nombre del propietario.
 */
class CuentaBancaria {
 public:
  CuentaBancaria() = default;
  CuentaBancaria(const std::string& numero_cuenta, const std::string& nombre, const double saldo);

  std::string numero_cuenta() const { return numero_cuenta_; }   /// Getter
  std::string nombre() const { return nombre_; }                 /// Getter
  double saldo() const { return saldo_; }                              /// Getter
  void Depositar(const double cantidad);
  bool Extraer(const double cantidad);
  double Impuestos() const;
  void Mostrar() const;
 private:
  std::string numero_cuenta_;
  std::string nombre_;
  double saldo_;
};

#endif