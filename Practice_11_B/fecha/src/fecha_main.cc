/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara 
 * @date Dec 20 2021
 * @brief clase Fecha
 *        este es un programa cliente que usa la clase
 */

#include <iostream>
#include <sstream>

#include "fecha.h"

int main(int argc, char** argv) {
  Usage(argc, argv);
  Fecha fecha_entered;
  std::string fecha_cadena{argv[1]};
  std::stringstream fecha {ChangeLines(fecha_cadena)};
  fecha >> fecha_entered;
  if (IsValidDate(fecha_entered) == false) {
    std::cout << "Enter a valid date.\n";
    exit(EXIT_SUCCESS); 
  }
  int num_iteraciones = strtol(argv[2], NULL, 0);
  CreateFile(num_iteraciones, fecha_entered, argv[3]);
  Fecha fecha1 {27, 02, 2008};
  std::cout << fecha1.PosponerDias(3) << std::endl;
  return 0; 
}