/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file counting_frequences.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program program that reads a sequence of natural numbers
  *        and that prints, for each one, how many times it appears.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P63414_en
  */

#include <iostream> 
#include <vector>
#include <algorithm>

const int kNumReductor{1000000000};

/**
 * @brief Shows the user how the program works
 * @param: Whitout parameters
 * @return Non return
 */
void Preamble() {
  std::cout << "The program reads a non-empty sequence of integer numbers,\
  and tells how many of them are equal to the last one." << std::endl;
}

/**
 * @brief Calculate ham many time there are the numbers entered
 * @param [in] kListNumbers: the vector to analize
 * @param [in] kNumSeleccionated: the number seleccionated
 * @return the number of repetitions of the number entered
 */
int AccountantNumbers(const std::vector<int>& kListNumbers, const int& kNumSeleccionated) {
  int num_repetitions{0};
  for (int i{0}, length_vector = kListNumbers.size(); i < length_vector; ++i) {
    if (kListNumbers[i] == kNumSeleccionated) {
      ++num_repetitions;
    }
  }
  return num_repetitions;
}

/**
 * @brief Shows in order the number of numbers entered
 * @param [in] kListNumbers: vector to analize
 * @return Non return
 */
void ShowNums(const std::vector<int>& kListNumbers) {
  for (size_t i{0}, length_vector = kListNumbers.size(); i < length_vector; ++i) {
    int num_seleccionated = kListNumbers[i], repeat_num{0};
    for (size_t iterations{0}; iterations <= i; ++iterations) {
      if (num_seleccionated == kListNumbers[iterations]) {
        ++repeat_num;
      }
    }
    if (repeat_num == 1) {
      std::cout << (kNumReductor + num_seleccionated) << " : " << AccountantNumbers(kListNumbers, num_seleccionated) << std::endl;
    }
  }
}

/**
 * Main function
 * @param: Whitout paremeters
 */
int main() {
  // Preamble();
	int num_numbers;
  std::cin >> num_numbers;
  std::vector<int> list_numbers;
  for (int i{0}; i < num_numbers; ++i) {
    int new_num_entered;
    std::cin >> new_num_entered;
    new_num_entered -= kNumReductor;
    list_numbers.push_back(new_num_entered);
  }
  std::sort(list_numbers.begin(), list_numbers.end());
  ShowNums(list_numbers);
  return 0;
}