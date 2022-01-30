/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file elementos.cc
  * @author Javier Almenara alu0101466552@ull.edu.es 
  * @date Nov 8 2021
  * @brief El programa lee dos letras (A, P o V) separados por un espacio y donde A representa (Aire),
  *        P que representa (Piedra), o V que representa (Viento), donde el agua (A) vence a la piedra 
  *        (P) que a su vez vence al viento (V) que vence al agua
  * @bug No hay errores conocidos
  * @see https://jutge.org/problems/P51352 
  */

#include <iostream>

// Esta función muestra al usuario la información sobre el funcionamiento del programa
void StartingName() {
  std::cout << "Este programa lee dos letras entre (A (Aire), P (Papel), V (Viento))" ;
  std::cout << " le dice cual es el ganador del enfrentamiento." << std::endl;
}

// Esta funcion decice quien ha ganado, o si ha ocurrido un empate entre los diferentes elementos
std::string JuezDelEnfrentamiento(char primer_elemento, char segundo_elemento) {
  std::string resultado_enfrentamiento;
  if (((primer_elemento == 'A') && (segundo_elemento == 'P')) || ((primer_elemento == 'P'))) {
    if (((segundo_elemento == 'V')) || ((primer_elemento == 'V') && (segundo_elemento == 'A'))) {
      resultado_enfrentamiento = "1";
    }
  }
  if (((primer_elemento == 'P') && (segundo_elemento == 'A')) || ((primer_elemento == 'V'))) {
    if (((segundo_elemento == 'P')) || ((primer_elemento == 'A') && (segundo_elemento == 'V'))) {
      resultado_enfrentamiento = "2";
    }
  }
  if (((primer_elemento == 'A') && (segundo_elemento == 'A')) || ((primer_elemento == 'P'))) {
    if (((segundo_elemento == 'P')) || ((primer_elemento == 'V') && (segundo_elemento == 'V'))) {
      resultado_enfrentamiento = "-";
    }
  }
  return resultado_enfrentamiento;
}

int main() {
  StartingName();
  char primer_elemento;
  char segundo_elemento;
  std::cin >> primer_elemento >> segundo_elemento;
  std::string resultado_enfrentamiento = JuezDelEnfrentamiento(primer_elemento, segundo_elemento);
  std::cout << resultado_enfrentamiento << std::endl;
  return 0;
}