/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date 28 Oct 2021
 * @brief
 */

#include <iostream>
#include <string>

int main() {
  std::cout << "Este programa muestra el numero de bytes en memoria que utiliza cada tipo de variable." << std::endl << std::endl;
  std::cout << "El tipo de datos bool se representa usando " << sizeof (bool) << " bytes." << std::endl;
  std::cout << "El tipo de datos char se representa usando " << sizeof (char) << " bytes." << std::endl;
  std::cout << "El tipo de datos void se representa usando " << sizeof (void) << " bytes." << std::endl;
  std::cout << "El tipo de datos short se representa usando " << sizeof (short) << " bytes." << std::endl;
  std::cout << "El tipo de datos int se representa usando " << sizeof (int) << " bytes." << std::endl;
  std::cout << "El tipo de datos float se representa usando " << sizeof (float) << " bytes." << std::endl;
  std::cout << "El tipo de datos long se representa usando " << sizeof (long) << " bytes." << std::endl;
  std::cout << "El tipo de datos long long se representa usando " << sizeof (long long) << " bytes." << std::endl;
  std::cout << "El tipo de datos double se representa usando " << sizeof (double) << " bytes." << std::endl;
  std::cout << "El tipo de datos long double se representa usando " << sizeof (long double) << " bytes." << std::endl;
  std::cout << "El tipo de datos string se representa usando " << sizeof (std::string) << " bytes." << std::endl;
  return 0;
}
