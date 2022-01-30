#include <iostream>

int main(){

	std::cout << "Hola, vamos a calcula el área y perímetro de un cuadrado dado su lado" << std::endl;
	std::cout << "Introduce el valor de su lado" << std::endl;
	int lado;
	std::cin >> lado;
	int area, perimetro;
	area= lado*lado, perimetro= 4*lado;
	std::cout << "El área es " << area <<" u2." << std::endl;
	std::cout << "El perímetro es " << perimetro << " u." << std::endl;
	
	return 0;
}
