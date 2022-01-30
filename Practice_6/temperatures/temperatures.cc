/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date 6 Nov 2021
 * @brief 
 *
 */

#include <iostream>

int main () {
  std::cout << "This program tells you, given a temperature, if you are in a hot, cold or pleasant condition." << std::endl;
  int temperature;
  std::cout << "Enter a temperature: ";
  std::cin >> temperature;
  if (temperature > 30) {
    std::cout << "It's hot." << std::endl;
  } else {
      if (temperature < 10) {
        std::cout << "It's cold." << std::endl;
      } else {
	  std::cout << "It's ok." << std::endl;
      }
  }
  if (temperature < 0) {
    std::cout << "Water would freeze." << std::endl;
  }
  if (temperature > 100 ) {
    std::cout << "Water would boil." << std::endl;
  }
  return 0;
}
