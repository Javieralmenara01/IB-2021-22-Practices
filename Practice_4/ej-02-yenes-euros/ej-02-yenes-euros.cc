#include <iostream>

int main() {
	
	const double yen= 133.04; //Este ejercicio tambien se puede realizarse dividiendo la cantidad en euros por /0.0075(equivalente yen->euro 
	std::cout << "Introduce la cantidad de euros que desea convertir a yenes" << std::endl;
	double euro;
	std::cin >> euro;
	double cambio_divisa;
	cambio_divisa = euro*yen;
	std::cout << "Son " << cambio_divisa << "¥." << std::endl;
	
	return 0;
}
