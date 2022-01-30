/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Jan 16 2021
 */

#include <iostream>

int main() {
  std::string sentence;
  /// Estas variables hacen referencia a la posición del objeto en el eje ox o oy
  int x{0}, y{0};
  std::cin >> sentence;
  for (size_t i{0}; i < sentence.size(); i++) {
    if (sentence[i] == 'n') {
      --y;
    } else if (sentence[i] == 's') {
      ++y;
    } else if (sentence[i] == 'e') {
      ++x;
    } else {
      --x;
    }
  }
  std::cout << "(" << x << ", " << y << ")" << std::endl;
}