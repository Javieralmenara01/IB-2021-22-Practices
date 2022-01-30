#include <iostream>

int main () {
	
	const float coste_metro= 1624;
	std::cout << "Introduce los metros de carretera a construir para calcular los costes." << std::endl;
	float metro;
	std::cin >> metro;
	float coste_construccion= metro*coste_metro;
	std::cout << "El coste de construccion es " << coste_construccion << "€." << std::endl;
	
	return 0;
}
