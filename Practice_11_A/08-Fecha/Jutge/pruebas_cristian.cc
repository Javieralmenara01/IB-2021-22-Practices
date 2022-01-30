/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Cristian Conrado alu0101466552@ull.edu.es
 * @date Dec 17 2021
 * @brief 
 * @see https://github.com/ULL-ESIT-IB-2021-2022/P11-Classes-CMake/blob/main/Classes-CMake.md
 */

bool leap_year(int y);

bool is_valid_date(int d, int m, int y) {
  if ((((d < 1) || (d > 32)) || ((m < 1) || (m > 13))) || (y < 1)) { /// eliminar fechas negativas
    return false;
  } else if (((((m == 1) || (m == 3)) || ((m == 5) || (m == 7))) || ((m == 8) || (m == 10))) || (m == 12)){ /// en los meses de 31 dias 
    if ((d > 0) && (d < 32)) { 
      return true;
    } else {
      return false;
    }
  } else if (m != 2) { /// meses que no sean de 31 dias ni febrero
    if ((d > 0) && (d < 31)) {
      return true;
    } else {
      return false;
    }
  } else if (leap_year(y)==true && (m == 2)) { /// febrero de años bisiestos
    if ((d > 0) && (d < 30)) {
      return true;
    } else {
      return false;
    }
  } else { /// febreros de años regulares, no bisiestos.
    if ((d > 0) && (d < 29)) {
      return true;
    } else {
      return false;
    }
  }
}

bool leap_year(int y) {
  if (y % 4 != 0)
		return false;
	if (y % 100 != 0)
		return true;
	if (y % 400 == 0)
		return true;
	else
		return false;
}