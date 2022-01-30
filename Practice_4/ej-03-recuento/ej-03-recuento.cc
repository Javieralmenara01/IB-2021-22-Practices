#include <iostream>

int main() {
	const double centimo=0.01;
	double monedas_1c;
       	double monedas_2c;
       	double monedas_5c;
       	double monedas_10c;
       	double monedas_20c;
       	double monedas_50c;
	std::cout << "Introduce la cantidad que posee, de monedas de 1 centimos." << std::endl;
	std::cin >> monedas_1c;
	std::cout << "Introduce la cantidad que posee, de monedas de 2 centimos." << std::endl;
        std::cin >> monedas_2c;
	std::cout << "Introduce la cantidad que posee, de monedas de 5 centimos." << std::endl;
        std::cin >> monedas_5c;
	std::cout << "Introduce la cantidad que posee, de monedas de 10 centimos." << std::endl;
	std::cin >> monedas_10c;
	std::cout << "Introduce la cantidad que posee, de monedas de 20 centimos." << std::endl;
	std::cin >> monedas_20c;
	std::cout << "Introduce la cantidad que posee, de monedas de 50 centimos." << std::endl;
	std::cin >> monedas_50c;
       	double billetes_5e;
	double billetes_10e;
	double billetes_20e;
        double billetes_50e;
        double billetes_100e;
        double billetes_200e;
        double billetes_500e;
	std::cout << "Introduce la cantidad que posee de billetes de 5 euros." << std::endl;
	std::cin >> billetes_5e;
	std::cout << "Introduce la cantidad que posee de billetes de 10 euros." << std::endl;
	std::cin >> billetes_10e;
	std::cout << "Introduce la cantidad que posee de billetes de 20 euros." << std::endl;
	std::cin >> billetes_20e;
	std::cout << "Introduce la cantidad que posee de billetes de 50 euros." << std::endl;
	std::cin >> billetes_50e;
	std::cout << "Introduce la cantidad que posee de billetes de 100 euros." << std::endl;
	std::cin >> billetes_100e;
	std::cout << "Introduce la cantidad que posee de billetes de 200 euros." << std::endl;
	std::cin >> billetes_200e;
	std::cout << "Introduce la cantidad que posee de billetes de 500 euros." << std::endl;
	std::cin >> billetes_500e;
	double cantidad_total;
	cantidad_total= monedas_1c*centimo + monedas_2c*2*centimo + monedas_5c*5*centimo + monedas_10c*10*centimo + monedas_20c*20*centimo +monedas_50c*50*centimo + billetes_5e*5 + billetes_10e*10 + billetes_20e*20 + billetes_50e*50 + billetes_100e*100 + billetes_200e*200 + billetes_500e*500;
	std::cout << "La cantidad total es " << cantidad_total << " €." << std::endl;
	
	return 0;
}
