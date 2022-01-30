#include <iostream>
#include <cmath>


int main() {
    std::cout << "Vamos a calcular el área y volumen de un cilindro." << std::endl;
    const double kPI = 3.14159;
    double altura;
    std::cout << "Introduzca la altura del cilindro." << std::endl;
    std::cin >> altura;
    double radio;
    std::cout << "Introduza el radio del cilindro." << std:::endl;
    std::cin >> radio;
    double area;
    area = (2 * kPI * (radio * (radio+altura)));
    double volumen;
    volumen = (kPI * (pow (radio,2))*altura);
    std::cout << "El area del cilindro es " << area << " u2."<< std::endl;
    std::cout << "El volumen del cilindro es " << volumen << " u3." << std::endl;

    return 0;
}
