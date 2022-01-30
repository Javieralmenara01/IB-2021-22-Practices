/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 15 2021
 * @brief clase CuentaBancaria
 *        este es un programa cliente que usa la clase CuentaBancaria
 *
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <vector>

#include "cuenta_bancaria.h"

int main() {
  CuentaBancaria cuenta_bancaria{"21006796510100031796", "Javier Almenara Herrera", 12345.6};
  cuenta_bancaria.Depositar(120);
  cuenta_bancaria.Extraer(50);
  cuenta_bancaria.Mostrar();
  return 0;
}