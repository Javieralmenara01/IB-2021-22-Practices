/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 15 2021
 * @brief CuentaBancaria class Implementation
 * 
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>
#include <string>

#include "cuenta_bancaria.h"

/** 
 * @brief constructor
 * @param[in] numero_cuenta: entero con el número de la cuenta
 * @param[in] nombre: string con el nombre de la persona propietaria de la cuenta
 * @param[in] saldo: double con saldo de la cuenta
 */
CuentaBancaria::CuentaBancaria(const std::string& numero_cuenta, const std::string& nombre, const double saldo) 
                              : numero_cuenta_{numero_cuenta}, nombre_{nombre}, saldo_{saldo} {
}

/** 
 * @brief Depositar función, añade un importe al saldo
 * @param[in] numero_cuenta: entero con el número de la cuenta
 */
void CuentaBancaria::Depositar(const double cantidad) {
  saldo_ += cantidad;
}

/** 
 * @brief Extraer función, resta un importe al saldo si es posible
 * @param[in] numero_cuenta: entero con el número de la cuenta
 * @return bool return
 */
bool CuentaBancaria::Extraer(const double cantidad) {
  if (saldo() < cantidad) {
    return false;
  } else {
    saldo_ -= cantidad;
    return true;
  }
}

/** 
 * @brief Impuestos función, calcula los impuestos de la cuenta
 * @return Los impuestos calculados 
 */
double CuentaBancaria::Impuestos() const {
  return ((saldo() * 5) / 100);
}

/** 
 * @brief Muestra el numero de cuenta, nombre, saldo e impuestos de la cuenta
 */
void CuentaBancaria::Mostrar() const {
  std::cout << "Numero de Cuenta: ES96" << numero_cuenta() << "\n" << "Nombre: " << nombre() << "\n" 
  << "Saldo Disponible: " << saldo() << "€ " << "Impuestos " << Impuestos() << "€" << std::endl;
}
