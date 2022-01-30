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
#include <algorithm>
#include <string>

int main() {
  std::cout << "Este programa le muestra la letra en mayuscula si introduce una letra en minúsculas, y viceversa." << std::endl << std::endl;
  std::cout << "Introduzca un letra" << std::endl; // Este programa no funcionará si introduce una ñ
  char letra;
  std::cin >> letra;
  int numero_correspondiente; // La variable hace referencia al numero correspondiente en el sistema de codificación ASCII
  numero_correspondiente = letra;
  //std::cout << numero_correspondiente << std::endl;
  if ((64 < numero_correspondiente) && (numero_correspondiente < 91)) {
    numero_correspondiente += 32;
    letra = numero_correspondiente;
    std::cout << "Esta seria la letra en minusculas " << letra << "." << std::endl;
  }
  else {
    if ((96 < numero_correspondiente) && (numero_correspondiente<123)) {	  
      numero_correspondiente -= 32;
      //std::cout << numero_correspondiente << std::endl;
      //std::cout << letra << std::endl;
      letra = numero_correspondiente;
      std::cout << "Esta seria la letra en mayusculas " << letra << "." << std::endl;
    }
    else {
      std::cout << "Introduce un caracter válido!" << std::endl;
    };  
  };
  return 0;
}
