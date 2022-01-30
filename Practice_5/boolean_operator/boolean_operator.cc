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

int main() {
  std::cout << "Este programa muestra la tabla de la verdad de las diferentes tipos de operaciones booleanas." << std::endl;
  std::cout << "Usted ha de considerar que el 0 es falso y el 1 veradero." << std::endl << std::endl;
  // Las variables booleanas declararadas en este programa reciben el nombre de P y Q, el uso de ese nombre se debe a la nomenclatura dadas en el uso estándar de las tablas   // de la verdad.
  // Ámbito para P (false) y Q (false)
  {
    std::cout << "Sean dos variables booleanas P (False) y Q (False)." << std::endl;
    const bool kVariableP{false};
    const bool kVariableQ{false};
    bool resultado_operacion = (kVariableP && kVariableQ);
    std::cout << "El resultado de P AND Q es " << resultado_operacion << "." << std::endl;
    resultado_operacion =(kVariableP || kVariableQ);
    std::cout << "El resultado de P OR Q es " << resultado_operacion << "." << std::endl;
    std::cout << "El resultado de NOT P es " << (!kVariableP) << "." << std::endl;
    std::cout << "El resultado de NOT Q es " << (!kVariableQ) << "." << std::endl <<std::endl;
  }
  // Ámbito para P (false) y Q (true)
  {  
    std::cout << "Sean dos variables booleanas P (False) y Q (True)." << std::endl;
    const bool kVariableP{false};
    const bool kVariableQ{true};
    bool resultado_operacion = (kVariableP && kVariableQ);
    std::cout << "El resultado de P AND Q es " << resultado_operacion << "." << std::endl;
    resultado_operacion = (kVariableP || kVariableQ);
    std::cout << "El resultado de P OR Q es " << resultado_operacion << "." << std::endl;
    std::cout << "El resultado de NOT P es " << (!kVariableP) << "." << std::endl;
    std::cout << "El resultado de NOT Q es " << (!kVariableQ) << "." << std::endl << std::endl;
  }
  // Ámbito para P (true) y Q (false)
  {
    std::cout << "Sean dos variables booleanas P (True) y Q (False)." << std::endl;
    const bool kVariableP{true};
    const bool kVariableQ{false};
    bool resultado_operacion = (kVariableP && kVariableQ);
    std::cout << "El resultado de P AND Q es " << resultado_operacion << "." << std::endl;
    resultado_operacion = (kVariableP || kVariableQ);
    std::cout << "El resultado de P OR Q es " << resultado_operacion << "." << std::endl;
    std::cout << "El resultado de NOT P es " << (!kVariableP) << "." << std::endl;
    std::cout << "El resultado de NOT Q es " << (!kVariableQ) << "." << std::endl << std::endl;
  }
  // Ambito para P (true) y Q (true)
  {
    std::cout << "Sean dos variables booleanas P (True) y Q (True)." << std::endl;
    const bool kVariableP{true};
    const bool kVariableQ{true};
    bool resultado_operacion = (kVariableP && kVariableQ);
    std::cout << "El resultado de P AND Q es " << resultado_operacion << "." << std::endl;
    resultado_operacion = (kVariableP || kVariableQ);
    std::cout << "El resultado de P OR Q es " << resultado_operacion << "." << std::endl;
    std::cout << "El resultado de NOT P es " << (!kVariableP) << "." << std::endl;
    std::cout << "El resultado de NOT Q es " << (!kVariableQ) << "." << std::endl << std::endl;
  }
  return 0;
}
