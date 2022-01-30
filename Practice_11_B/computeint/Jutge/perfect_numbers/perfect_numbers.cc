/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Javier Almenara Herrera alu010146552@ull.edu.es
 * @date Dec 20 2021
 * @brief balanced_numbers.cc
 */

bool is_perfect(int n) {
  int result_num{0};
  for (int i = n - 1; i > 0; --i) {
    if (n % i == 0) {
      result_num += i;
    }
  }
  if ((result_num == n) && (n != 0)){
    return true;
  } else {
    return false;
  }
}