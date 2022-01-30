/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file cesar_cipher.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Nov 26 2021
  * @brief This program encrypts messages as the “Caesar cipher”, used by Julius 
  *        Caesar to communicate with his generals. Given a constant k, each letter of the
  *        original message is replaced by the letter that is alphabetically k positions to 
  *        its right (circularly, if needed). For instance, if k = 5, we must change ‘a’ by ‘f’.x
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P33371_en
  */

#include <iostream> 
#include <cstring>
#include <cstdlib>     /// exit

/**
 * @brief Shows the user how the program works
 * @param: Whitout parameters
 * @return Non return
 */
void Preamble() {
  std::cout << "This program encrypts messages as the “Caesar cipher”, used by Julius\
  Caesar to communicate with his generals. Given a constant k, each letter of the\
  eoriginal message is replaced by the letter that is alphabetically k positions to\
  its right (circularly, if needed). For instance, if k = 5, we must change ‘a’ by ‘f’.x" << std::endl;
}


/**
 * @brief Encoded the chars entered by user
 * @param [in] letter_seleccionated: char to encodes
 * @param [in] kNumRemplacePositions: num for change the position letter
 * @return Char encoded
 */
char Encoded(char letter_selecionated, const int kNumRemplacePositions) {
  int position = letter_selecionated;
  if (position == 95) {
    position = 32;
  }
  if ((position < 123) && (position > 96)) {
    position = ((position - 32) + kNumRemplacePositions);
  }
  if (position > 90) {
    position -= 26;
  }
  letter_selecionated = position;
  return letter_selecionated;
}

/**
 * @brief Encoded the chars entered by user
 *@param [in] letter_seleccionated: char to encodes
 * @param [in] kNumRemplacePositions: num for change the position letter
 * @return Non return
 */
void ShowCharacters(const std::string& kSentenceEntered, const int kNumRemplacePositions) {
  char letter_seleccionated;
  for (size_t i{0}, lenght_string = kSentenceEntered.size(); i < lenght_string; ++i) {
      letter_seleccionated = kSentenceEntered[i];
      std::cout << Encoded(letter_seleccionated, kNumRemplacePositions);
  }
}

/** Main function
 *  @param: Whitout paremeters
 */
int main() {
  // Preamble();
  int num_remplace_positions;
  std::string sentence_entered;
  while (true) {
    std::cin >> num_remplace_positions;
    if (num_remplace_positions > 26) {
    num_remplace_positions = (num_remplace_positions % 26);
    }
    getline(std::cin, sentence_entered, '.');
    if (!std::cin) {
      std::cout << "\n";
      exit(EXIT_SUCCESS);
    }
    ShowCharacters(sentence_entered, num_remplace_positions);
  }
  return 0;
}
