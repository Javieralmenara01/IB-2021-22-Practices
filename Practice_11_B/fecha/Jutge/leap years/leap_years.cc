/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara alu0101466552@ull.edu.es
 * @date Dec 17 2021
 * @brief Check if the year entered is leap or no.
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

#include <iostream>

int main() {
  while (true) {
    int year_entered;
    std::cin >> year_entered;
    if (!std::cin) {
      break;
    }
    if (((year_entered % 4 == 0) && (year_entered % 100 != 0)) || (year_entered % 400 == 0 )) {
      std::cout << "YES\n";
    } else {
      std::cout << "NO\n";
    }
  }
  return 0;
}