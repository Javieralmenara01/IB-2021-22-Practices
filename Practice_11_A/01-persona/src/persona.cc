/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Dec 13 2021
 * @brief Persona class Implementation
 *
 * @see https://www.learncpp.com/cpp-tutorial/89-class-code-and-header-files/
 */

#include <iostream>
#include <string>

#include "persona.h"

/*
 * @brief constructor
 * @param[in] nombre: string con el nombre de la persona a crear
 */
Persona::Persona(const std::string& nombre, const std::string& apellido, const int edad) 
                : nombre_{nombre}, apellido_{apellido}, edad_{edad} {
  /// std::cout << "Constructor persona ejecutado" << std::endl;
}

/// Persona member function 
void Persona::Print() const {
  std::cout << "Nombre: " << nombre() << " " << apellido() << " Edad: " << edad() << std::endl;
}