/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara
 * @date 28 Oct 2021
 * @brief 
 *
 */


#include <iostream>

int main() {
  // Evaluacion con ambas condiciones ciertas
  std::cout << "Este programa muestra el comportamiento de la evaluación de circuito corto que efectua el lenguaje de programación." << std::endl << std::endl;
  int variable_de_analisis{0};
  std::cout << "Para la evaluación usamos una estructura de control if que depende de dos condiciones, e inicializamos una variable con valor 0, durante la estructura de control cambiamos el valor de la variable en la segunda condicion si el valor de la variable es 0, la evaluación ha despreciado la segunda condición, en caso contrario la ha tenido en consideración." << std::endl << std::endl;
  std::cout << "Usamos el operador OR para la evaluación, donde las dos condiciones son ciertas." << std::endl;
  if ((variable_de_analisis == 0) || ((++variable_de_analisis) == 1)) {
    std::cout << "El valor de la variable de analisis es " << variable_de_analisis << std::endl << std::endl;
  }
  variable_de_analisis{0};
  std::cout << "Usamos el operador AND para la evaluación, donde las dos condiciones son ciertas." << std::endl;
  if ((variable_de_analisis == 0) && ((++variable_de_analisis) == 1)) {
    std::cout << "El valor de la variable de analisis es " << variable_de_analisis << std::endl << std::endl;
  }   
  // Evaluacion con la segunda condición cierta
  std::cout << "Para la evaluación usamos una estructura de control if que depende de dos condiciones, e inicializamos una variable con valor 0, durante la estructura de control cambiamos el valor de la variable en la segunda condicion si el valor de la variable es 0, la evaluación ha despreciado la segunda condición, en caso contrario la ha tenido en consideración." << std::endl << std::endl;
  variable_de_analisis{0};
  std::cout << "Usamos el operador AND para la evaluación, donde la segunda condicion es la unica cierta." << std::endl;
  if ((variable_de_analisis == 1) && ((++variable_de_analisis) == 1)); { // Aquí hemos inducido mediante el uso del punto y coma, y con ayuda de un ámbito que nos muestre el valor de la variable
    std::cout << "El valor de la variable de analisis es " << variable_de_analisis << std::endl << std::endl;
  }
  variable_de_analisis{0};
  std::cout << "Usamos el operador OR para la evaluación, donde la segunda condicion es la unica cierta." << std::endl;
  if ((variable_de_analisis == 1) || ((++variable_de_analisis) == 1)) {
    std::cout << "El valor de la variable analisis es " << variable_de_analisis << std::endl << std::endl;
  }
  return 0;
}
