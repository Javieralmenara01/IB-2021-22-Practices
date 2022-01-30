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

#include <random>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

int main () {
  std::cout << "Este programa introduce 500 numeros generados de forma aleatoria, y nos muestra el menor, el mayor asi como su valor medio." << std::endl;
  // Generador de Aleatorios
  std::random_device rd;
  std::default_random_engine eng(rd());
  std::uniform_real_distribution<double> distr(0.0, 10.0);
  const int kSizeVector{500}; // Asignación de un valor constante   
  std::vector<double> listaDeAleatorios;
  int contador; // La funcion contador es creada con el fin de realizar un número n de iteraciones
  // Asignación de los diferentes aleatorios en el vector
  for (contador = 0; kSizeVector > contador; ++contador) {  
  double numero_aleatorio = (distr(eng));
  listaDeAleatorios.push_back(numero_aleatorio);
  }
  // Suma de todos los números aleatorios para el cálculo de la media
  double suma_total{0};
  for (contador = 0; listaDeAleatorios.size() > contador; ++contador) {
    suma_total = (suma_total + (listaDeAleatorios[contador]));
  }
  std::sort(listaDeAleatorios.begin(), listaDeAleatorios.end());
  double valor_medio = (suma_total / kSizeVector);
  std::cout << "El numero menor es " << std::setprecision(1) << listaDeAleatorios[0] << std::endl;
  std::cout << "El numero mayor es " << std::setprecision(3) << listaDeAleatorios[499] << std::endl;
  std::cout << "El valor medio de los numeros aleatorios es " << std::setprecision(3) << valor_medio << std::endl;
  return 0;
}
