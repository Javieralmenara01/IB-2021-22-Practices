/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief Complejo class Implementation
 */

#include <iostream>
#include <fstream>
#include <cmath>
#include <sstream>
#include "racional.h"

/**
 * @brief Usage function
 * @param argc
 * @param argv
 */
void Usage(int argc, char** argv) {
 if ((argc != 3) && (argc != 2)) {
    std::cout << argv[0] << " -- Números Racionales\n";
    std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida\n";
    std::cout << "Pruebe " << argv[0] << " --help para más información\n";
    exit(EXIT_SUCCESS);
  }
  if (argc == 2) {  /// The user has given a single parameter. Check if correct.
    std::string parameter1{argv[1]};
    if (parameter1 == "--help") {
      std::cout << argv[0] << " -- Números Racionales\n";
      std::cout << "Modo de uso: " << argv[0] << " fichero_entrada fichero_salida\n\n";
      std::cout << "fichero_entrada: Fichero de texto conteniendo líneas con un par de números" <<
      "racionales: `a/b c/d` separados por un espacio\n";
      std::cout << "fichero_salida:  Fichero de texto que contendrá líneas con las operaciones" <<
      "realizadas: `a/b + c/d = n/m`\n";
      exit(EXIT_SUCCESS);
    }
    else {
      std::cout << argv[0] << ": Faltan parámetros" << std::endl;
      std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
}

/*
 * Change the lines for spaces
 */
std::fstream ChangeLines(std::istream& file_input) {
  std::string line_seleccionated;
  std::fstream new_file;
  new_file.open("text.txt", std::fstream::out);
  while (getline(file_input, line_seleccionated)) {
    for (size_t i{0}, long_line = line_seleccionated.size(); i < long_line; ++i) {
      char letter = line_seleccionated[i];
      int ascii = letter;
      if (ascii == 47) {
        ascii = 32;
        letter = ascii;
        new_file << letter;
      } else {
        new_file << letter;
      }
    }
    new_file << "\n";
  }
  new_file.close();
  return new_file;
}

/*
 * Create the output file
 */
void CreateFile() {
  std::ofstream file_created;
  file_created.open("created.txt");
  std::ifstream file_modified;
  file_modified.open("text.txt");
  while (true) {
    Racional racional1, racional2;
    file_modified >> racional1;
    file_modified >> racional2;
    if (file_modified.eof()) {
      break;
    }
    file_created << "Operaciones con racionales: " << racional1 << " " << racional2 << "\n";
    file_created << racional1 << " + " << racional2 << " : " << (racional1 + racional2) << "\n";
    file_created << racional1 << " - " << racional2 << " : " << (racional1 - racional2) << "\n";
    file_created << racional1 << " x " << racional2 << " : " << (racional1 * racional2) << "\n";
    file_created << racional1 << " / " << racional2 << " : " << (racional1 / racional2) << "\n\n";
  }
  file_modified.close(); file_created.close();
}

/*
 * Operator >> for std::cin
 */
std::istream& operator>>(std::istream& in, Racional& racional) {
  in >> racional.numerador_;
  in >> racional.denominador_;
  return in;
}

/*
 * Operator >> for std::ifstream
 */
std::ifstream& operator>>(std::ifstream& fin, Racional& racional) {
  fin >> racional.numerador_;
  fin >> racional.denominador_;
  return fin;
}

/*
 * Operator << for std::cout
 */
std::ostream& operator<<(std::ostream& out, const Racional& racional) {
  out << racional.numerador() << "/" << racional.denominador();
  return out;
}

/*
 * Operator << for std::ofstream
 */
std::ofstream& operator<<(std::ofstream& fout, const Racional& racional) {
  fout << racional.numerador() << "/" << racional.denominador();
  return fout;
}

/*
 * Operator + for Racional class
 */
Racional operator+(const Racional& racional1, const Racional& racional2) {
  Racional result;
  if (racional1.denominador() == racional2.denominador()) {
    result = {racional1.numerador() + racional2.numerador(), racional1.denominador()};
  } else if (racional1.denominador() > racional2.denominador()) {
    if (racional1.denominador() % racional2.denominador() == 0) {
      int multiplo = racional1.denominador() / racional2.denominador();
      result = {racional1.numerador() + (racional2.numerador() * multiplo), racional1.denominador()};
    } else {
      result = {((racional1.numerador() * racional2.denominador()) + (racional2.numerador() * racional1.denominador())),
                racional1.denominador() * racional2.denominador()};
    }
  } else {
    if (racional2.denominador() % racional1.denominador() == 0) {
      int multiplo = racional2.denominador() / racional1.denominador();
      result = {(racional1.numerador() * multiplo) + racional2.numerador(), racional2.denominador()};
    } else {
      result = {((racional1.numerador() * racional2.denominador()) + (racional2.numerador() * racional1.denominador())),
                racional1.denominador() * racional2.denominador()};
    }
  }
  return result;
}

/*
 * Operator - for Racional class
 */
Racional operator-(const Racional& racional1, const Racional& racional2) {
  Racional result;
  if (racional1.denominador() == racional2.denominador()) {
    result = {racional1.numerador() - racional2.numerador(), racional1.denominador()};
  } else if (racional1.denominador() > racional2.denominador()) {
    if (racional1.denominador() % racional2.denominador() == 0) {
      int multiplo = racional1.denominador() / racional2.denominador();
      result = {racional1.numerador() - (racional2.numerador() * multiplo), racional1.denominador()};
    } else {
      result = {((racional1.numerador() * racional2.denominador()) - (racional2.numerador() * racional1.denominador())),
                racional1.denominador() * racional2.denominador()};
    }
  } else {
    if (racional2.denominador() % racional1.denominador() == 0) {
      int multiplo = racional2.denominador() / racional1.denominador();
      result = {(racional1.numerador() * multiplo) - racional2.numerador(), racional2.denominador()};
    } else {
      result = {((racional1.numerador() * racional2.denominador()) - (racional2.numerador() * racional1.denominador())),
                racional1.denominador() * racional2.denominador()};
    }
  }
  return result;
}

/*
 * Operator * for Racional class
 */
Racional operator*(const Racional& racional1, const Racional& racional2) {
  Racional result = {racional1.numerador() * racional2.numerador(), racional1.denominador() * racional2.denominador()};
  return result;
}

/*
 * Operator / for Racional class
 */
Racional operator/(const Racional& racional1, const Racional& racional2) {
  Racional result = {racional1.numerador() * racional2.denominador(), racional1.denominador() * racional2.numerador()}; 
  return result;
}

/*
 * Operator < for Racional class
 */
bool operator<(const Racional& racional1, const Racional& racional2) {
  double result1 = racional1.numerador() / racional1.denominador();
  double result2 = racional2.numerador() / racional2.denominador();
  if (result1 >= result2) {
    return false;
  } else {
    return true;
  }
}

/*
 * Operator > for Racional class
 */
bool operator>(const Racional& racional1, const Racional& racional2) {
  double result1 = racional1.numerador() / racional1.denominador();
  double result2 = racional2.numerador() / racional2.denominador();
  if (result1 <= result2) {
    return false;
  } else {
    return true;
  }
}

/*
 * Operator == for Racional class
 */
bool operator==(const Racional& racional1, const Racional& racional2) {
  double result1 = racional1.numerador() / racional1.denominador();
  double result2 = racional2.numerador() / racional2.denominador();
  if (result1 == result2) {
    return true;
  } else {
    return false;
  }
}

/*
 * Operator != for Racional class
 */
bool operator!=(const Racional& racional1, const Racional& racional2) {
  double result1 = racional1.numerador() / racional1.denominador();
  double result2 = racional2.numerador() / racional2.denominador();
  if (result1 == result2) {
    return false;
  } else {
    return true;
  }
}

Racional Racional::Simplificar() {
  int num_mayor{0}, numerador_result = numerador(), denominador_result = denominador();
  if (numerador_result >= denominador_result) {
    num_mayor = denominador_result;
  } else {
    num_mayor = numerador_result;
  }
  for (int i{num_mayor}; i >= 2; --i) {
    if ((numerador_result % i == 0) && (denominador_result % i == 0)) {
      numerador_result = numerador_result / i;
      denominador_result = denominador_result / i;
      break;
    }
  }
  Racional result{numerador_result, denominador_result};
  return result;
}