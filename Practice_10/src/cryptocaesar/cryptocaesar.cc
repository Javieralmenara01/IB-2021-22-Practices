/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2021-2022
  *
  * @file cryptocaesar.cc
  * @author Javier Almenara alu0101466552@ull.edu.es
  * @date Dec 8 2021
  * @brief The program read a number n of captured messagesand each one of the n 
  *        following lines contains a encrypted message. The messages contain 
  *        exclusively between 9 and 1000 uppercase letters, and end with a dot.
  *        It is known that n < 10000.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P75810_en
  */

#include <iostream>

/** Preamble function
 * This function shows the user the program operation
 *  @param : Whitout parameters
 *  @return void: Whitout return
 */
void Preamble() {
  std::cout << "The program read a number n of captured messagesand each one of the n \
  following lines contains a encrypted message. The messages contain exclusively between \
  9 and 1000 uppercase letters, and end with a dot. It is known that n < 10000." << "\n";
}

/** Calculate Crypto Num function
 * This function only calculate the crypto num
 *  @param[in] kSequenceEntered: String with the sequence of characters entered
 *  @return crypto_num: The number that decrypts the encryption of the message 
 */
int CalculateCryptoNum(const std::string& kSequenceEntered) {
  int crypto_num; /// Number that change de position of letters 
  int last_letter_position = (kSequenceEntered.size() - 1), num_ascii;
  char last_letter = kSequenceEntered[last_letter_position];
  num_ascii = last_letter;
  if (num_ascii > 82) {
    crypto_num = 82 - num_ascii;
  } else if (num_ascii < 82) {
    crypto_num = 82 - num_ascii; 
  } else {
    crypto_num = 0;
  }
  return crypto_num;
}

/** Show Sequence function
 * This function shows the user on the screen the sequence 
 * of characters entered in a decryptable way
 *  @param[in] kSequenceEntered: String with the sequence of characters entered
 *  @param[in] kCryptoNum: The number that decrypts the encryption of the message 
 *  @return void, whithout return
 */
void ShowSequence(const std::string& kSequenceEntered, const int kCryptoNum) {
  char letter_seleccionated;
  int num_ascii;
  for (size_t i{0}, length_sequence = kSequenceEntered.size(); i < length_sequence; ++i) {
    letter_seleccionated = kSequenceEntered[i];
    num_ascii = (letter_seleccionated + kCryptoNum);
    if (num_ascii > 90) {
      num_ascii -= 26;
    } else if (num_ascii < 65) {
      num_ascii += 26;
    }
    if ((num_ascii < 91) && (num_ascii > 64)) {
      letter_seleccionated = num_ascii;
      std::cout << letter_seleccionated;
    }
  }
  std::cout << "\n";
}

/** Main function
 *  @param Whitout params
 */
int main() {
  /// Preamble();
  int num_sequences;
  std::cin >> num_sequences;
  for (int i{1}; i <= num_sequences; ++i) {
    std::string sequence_entered;
    int crypto_num; /// Number that change de position of letters 
    getline(std::cin, sequence_entered, '.');
    crypto_num = CalculateCryptoNum(sequence_entered);
    ShowSequence(sequence_entered, crypto_num);
  }
  return 0;
}