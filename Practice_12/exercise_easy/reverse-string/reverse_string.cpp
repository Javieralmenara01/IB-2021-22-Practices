#include "reverse_string.h"
#include <string>
#include <iostream>

namespace reverse_string {
  std::string reverse_string(std::string frase) {
    std::string frase_creada{};
    /// Have two iterations for signed type problems
    int iterations(frase.size() - 1);
    for (size_t i{0}, limit{frase.size()}; i < limit; ++i) {
      frase_creada.push_back(frase[iterations]);
      --iterations;
    }
    return frase_creada;
  }
}  // namespace reverse_string
