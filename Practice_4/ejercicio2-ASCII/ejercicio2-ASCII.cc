#include <iostream>

int main() {
    char character;
    int numero_correspondiente= 32;
    while (numero_correspondiente < 177) {
        character = numero_correspondiente;
        std::cout << "El caracter es " << character << std::endl;
        numero_correspondiente = numero_correspondiente + 1;
    }

    return 0;
}
