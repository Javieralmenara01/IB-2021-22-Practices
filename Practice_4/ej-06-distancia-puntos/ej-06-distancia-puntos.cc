#include <iostream>
#include <cmath>

int main () {
	
	std::cout << "Este programa calcula la distancia entre dos puntos A-B" << std::endl;
	//Las Variables constituyen cada uno de los valores de las coordenadas del Punto A (x_1, y_1, z_1)
	double posicion_x_1;
	double posicion_y_1;
	double posicion_z_1;
	std::cout << "Introduce las coordenadas del espacio del punto A, de tal forma que se deje un espacio entre sí, o si lo desea tambien puede introducirlo de uno en uno." << std::endl;
	std::cin >> x_1; std::cin >> y_1; std::cin >> z_1;
	//Las variables constituyen cada uno de los valores de las coordenadas del Punto B (x_2, y_2, z_2)
	double posicion_x_2;
    double posicion_y_2;
    double posicion_z_2;
	std::cout << "Introduce las coordenadas del espacio del punt B, de tal forma que se deje un espacio entre sí." << std::endl;
	std::cin >> x_2; std::cin >> y_2; std::cin >> z_2;
	double distancia;
	distancia = sqrt (( pow ((posicion_x_1-posicion_x_2), 2)) + ( pow ((posicion_y_1-posicion_y_2), 2)) + ( pow ((posicion_z_1-posicion_z_2), 2)));
	std::cout << "La distancia entre los puntos es  " << distancia << " u." << std::endl;
	
	return 0;
}
