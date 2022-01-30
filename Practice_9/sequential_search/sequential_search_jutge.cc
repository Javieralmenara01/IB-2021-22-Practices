/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file sequential_search.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program that tells if the integer number x 
  *        is present in the vector of integer numbers v.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P11725_en
  */

#include <iostream>
#include <vector>

/**
 * @brief Show if the number entered exists in the vector entered
 * @param [in] x: num to search
 * @param [in] v: vetor to analize
 * @return Boolean value
 */
bool exists(int x, const std::vector<int>& v) {
  bool exits_element{0};
  for (size_t i{0}, length_vector = v.size(); i < length_vector; ++i) {
    if (v[i] == x) {
      exits_element = 1;
      return exits_element;
    }
  }
  return exits_element;
}