/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief Fecha class Implementation
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "fecha.h"

const std::string kHelpText {"El programa lee una fecha, un numero, y un archivo de texto como salida."};

/**
 * @brief Usage function
 * @param argc
 * @param argv
 */
void Usage(int argc, char** argv) {
 if ((argc != 4) && (argc != 2)) {
    std::cout << argv[0] << " - Gestión de fechas\n";
    std::cout << "Modo de uso: " << argv[0] << " dd/mm/aa N fichero_salida.txt\n";
    std::cout << "Pruebe " << argv[0] << " --help para más información\n";
    exit(EXIT_SUCCESS);
  }
  if (argc == 2) {  /// The user has given a single parameter. Check if correct.
    std::string parameter1{argv[1]};
    if (parameter1 == "--help") {
      std::cout << kHelpText << std::endl;
      exit(EXIT_SUCCESS);
    }
    else {
      std::cout << argv[0] << ": Faltan un parámetro" << std::endl;
      std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
}

/*
 * @brief Function ChangeLines
 * This function change the / for spaces
 */
std::string ChangeLines(const std::string& fecha_cadena) {
  std::string fecha;
  for (size_t i = 0; i < fecha_cadena.length(); ++i) {
    char letra = fecha_cadena[i];
    int ascii = letra;
    if (ascii == 47) {
      ascii = 32;
      letra = ascii;
      fecha.push_back(letra);
    } else {
      fecha.push_back(letra);
    }
  }
  return fecha;
}

/*
 * @brief Function IsValidDate
 * This assert if the date is valid date or no
 */
bool IsValidDate(const Fecha& fecha) {
  int day = fecha.day(), month = fecha.month(), year = fecha.year();
  if ((((day < 1) || (day > 32)) || ((month < 1) || (month > 13))) || (year < 1)) { /// Eliminar fechas negativas
    return false;
  } else if (((((month == 1) || (month == 3)) || ((month == 5) || (month == 7))) 
            || ((month == 8) || (month == 10))) || (month == 12)) { /// En los meses de 31 dias 
    if ((day > 0) && (day < 32)) { 
      return true;
    } else {
      return false;
    }
  } else if (month != 2) { /// Meses que no sean de 31 dias ni febrero
    if ((day > 0) && (day < 31)) {
      return true;
    } else {
      return false;
    }
  } else if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0 )) { /// Febrero de años bisiestos
    if ((day > 0) && (day < 30)) {
      return true;
    } else {
      return false;
    }
  } else { /// Febreros de años regulares, no bisiestos.
    if ((day > 0) && (day < 29)) {
      return true;
    } else {
      return false;
    }
  }
}

/*
 * @brief Constructor
 */
Fecha::Fecha(const int day, const int month, const int year) : day_{day}, month_{month}, year_{year} {}

/*
 * @brief Create the file output
 */
void CreateFile(const int num_iterations, const Fecha& fecha, const char* argv) {
  std::ofstream file_created;
  file_created.open(argv);
  int day{fecha.day()}, month{fecha.month()}, year{fecha.year()};
  for (int i{0}; i < num_iterations; ++i) {
    if (((((month == 1) || (month == 3)) || ((month == 5) || (month == 7))) 
        || ((month == 8) || (month == 10))) || (month == 12)) {
      if (day == 31) {
        day = 1;
        if (month == 12) {
          month = 1;
          ++year;
        } else {
          ++month;
        }
      } else {
        ++day;
      }
    } else if (month != 2) {
      if (day == 30) {
        day = 1;
        ++month;
      } else {
        ++day;
      }
    } else {
      if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0 )) {
        if (day == 29) {
          day = 1;
          ++month;
        } else {
          ++day;
        }
      } else {
        if (day == 28) {
          day = 1;
          ++month;
        } else {
          ++day;
        }
      }
    }
    file_created << day << "/" << month << "/" << year << std::endl;
  }
}

/*
 * @brief Fecha Imprimir
 */
void Fecha::Imprimir() const {
  std::cout << "Fecha: " << day() << "/" << month() << "/" << year() << std::endl;
}

/*
 * @brief Pospone un día de la fecha dada
 */
Fecha Fecha::PosponerDias(const int num_days) {
  int days{day()}, months{month()}, years{year()};
  for (int i{0}; i < num_days; ++i) {
    if (((((months == 1) || (months == 3)) || ((months == 5) || (months == 7))) 
        || ((months == 8) || (months == 10))) || (months == 12)) {
      if (days == 31) {
        days = 1;
        if (months == 12) {
          months = 1;
          ++years;
        } else {
          ++months;
        }
      } else {
        ++days;
      }
    } else if (months != 2) {
      if (days == 30) {
        days = 1;
        ++months;
      } else {
        ++days;
      }
    } else {
      if (((years % 4 == 0) && (years % 100 != 0)) || (years % 400 == 0 )) {
        if (days == 29) {
          days = 1;
          ++months;
        } else {
          ++days;
        }
      } else {
        if (days == 28) {
          days = 1;
          ++months;
        } else {
          ++days;
        }
      }
    }
  }
  Fecha fecha_created{days, months, years};
  return fecha_created;
}

/*
 * @brief Fecha operator >
 */
bool operator>(const Fecha& fecha1, const Fecha& fecha2) {
  if (fecha1.year() > fecha2.year()) {
    return true;
  } else if (fecha1.year() == fecha2.year()) {
    if (fecha1.month() > fecha2.month()) {
      return true;
    } else if (fecha1.month() == fecha2.month()) {
      if (fecha1.day() > fecha2.day()) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  } else {
    return false;
  }
}

/*
 * @brief Fecha operator <
 */
bool operator<(const Fecha& fecha1, const Fecha& fecha2) {
  if (fecha1.year() < fecha2.year()) {
    return true;
  } else if (fecha1.year() == fecha2.year()) {
    if (fecha1.month() < fecha2.month()) {
      return true;
    } else if (fecha1.month() == fecha2.month()) {
      if (fecha1.day() < fecha2.day()) {
        return true;
      } else {
        return false;
      }
    } else {
      return false;
    }
  } else {
    return false;
  }
}

/*
 * @brief Fecha operator <<
 */
bool operator==(const Fecha& fecha1, const Fecha& fecha2) {
  if (((fecha1.day() == fecha2.day()) && (fecha1.month() == fecha2.month()))
      && (fecha1.year() == fecha2.year())) {
    return true;
  } else {
    return false;
  }
}

/*
 * @brief Fecha operator <<
 */
std::ostream& operator<<(std::ostream& out, const Fecha& fecha) {
  out << fecha.day() << "/" << fecha.month() << "/" << fecha.year();
  return out;
}

/*
 * @brief Fecha operator >>
 */
std::istream& operator>>(std::istream& in, Fecha& fecha) {
  in >> fecha.day_;
  in >> fecha.month_;
  in >> fecha.year_;
  return in;
}

/*
 * @brief Fecha LeapYear
 */
bool Fecha::LeapYear(const Fecha& fecha) {
  int year = fecha.year();
  if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0 )) {
    return true;
  } else {
    return false;
  }
}