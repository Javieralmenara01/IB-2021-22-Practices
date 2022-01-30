/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file statisticals_measure.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 24 2021
  * @brief The program reads non-empty sequences of real numbers and, for 
  *        each sequence, prints its minimum, its maximum and its average.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P17179_en
  */

#include <iostream>
#include <vector>
#include <iomanip>

 /*
 * @brief Shows the user how the program works
 * @param array: Whitout parameters
 * @return Non return
 */
void Preamble() {
  std::cout << "The program reads non-empty sequences of real numbers and, for \
  each sequence, prints its minimum, its maximum and its average." << std::endl;
}

/*
 * @brief Searches the maximum number of the sequence entered
 * @param vector: the vector to analize
 * @return The maximum num
 */
double MaximumNum(const std::vector<double>& kSequenceEntered) {
  double maximum_num = kSequenceEntered[0];
  for (size_t i{1}, length_vector = kSequenceEntered.size(); i < length_vector; ++i) {
    if (kSequenceEntered[i] > maximum_num) {
      maximum_num = static_cast<double>(kSequenceEntered[i]);
    }
  }
  return maximum_num;
}

/**
 * @brief Searches the average of the sequence entered
 * @param [in] kSequenceEntered: the vector to analize
 * @return The average
 */
double CalculateAverage(const std::vector<double>& kSequenceEntered) {
  double average_num = kSequenceEntered[0];
  for (size_t i{1}, length_vector = kSequenceEntered.size(); i < length_vector; ++i) {
    average_num += kSequenceEntered[i];
  }
  average_num = static_cast<double>(average_num / kSequenceEntered.size());
  return average_num;
}

/*
 * @brief Searches the minimum number of the sequence entered
 * @param [in] kSequenceEntered: the vector to analize
 * @return The minimum number
 */
double MinimumNum(const std::vector<double>& kSequenceEntered) {
  double minimum_num = kSequenceEntered[0];
  for (size_t i{1}, length_vector = kSequenceEntered.size(); i < length_vector; ++i) {
    if (kSequenceEntered[i] < minimum_num) {
      minimum_num = static_cast<double>(kSequenceEntered[i]);
    }
  }
  return minimum_num;
}

/** Main function
 *  @param: Whitout paremeters
 */
int main() {
  // Preamble();
  int size_of_sequence;
  int num_of_sequence;
  std::cin >> num_of_sequence;
  double new_num_entered;
  for (int i{0}; i < num_of_sequence; ++i)  {
    std::cin >> size_of_sequence;
    std::vector<double> sequence_entered;
    for (int i{0}; i < size_of_sequence; ++i) {
      std::cin >> new_num_entered;
      sequence_entered.push_back(new_num_entered);
    }
    std::cout << std::setprecision(4) << std::fixed << MinimumNum(sequence_entered) << " ";
    std::cout << std::setprecision(4) << std::fixed << MaximumNum(sequence_entered) << " ";
    std::cout << std::setprecision(4) << std::fixed << CalculateAverage(sequence_entered) << std::endl;
  }
  return 0;
}