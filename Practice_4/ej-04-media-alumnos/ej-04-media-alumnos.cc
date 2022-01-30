#include <iostream>
#include <cmath>

int main() {
	std::cout << "Vamos a calcular la media de 3 notas de 3 alumnos diferentes." << std::endl;
	std::cout << "Para ello deberá introducir un número entre 0 y 10" << std::endl;
	double nota_a1;
	double nota_a2;
	double nota_a3;
	double media_a;
	std::cout << "Introduce la primera nota del alumno numero 1" << std::endl;
	std::cin >> nota_a1;
	std::cout << "Introduce la segunda nota del alumno numero 1" << std::endl;
	std::cin >> nota_a2;
	std::cout << "Introduce la tercera nota del alumno numero 1" << std::endl;
	std::cin >> nota_a3;
	if ((0.0<=nota_a1) && (nota_a1<=10.0) && (0.0<=nota_a2) && (nota_a2<=10.0) && (0.0<=nota_a3) && (nota_a3<=10.0)) {
		media_a= (nota_a1 + nota_a2 + nota_a3)/3;
	}
       	else { 
		std::cout << "Introduzca  una nota  válida, de lo contrario el programa no acturá de forma correcta" << std::endl;
	}
	double nota_b1;
        double nota_b2;
        double nota_b3;
	double media_b;
	std::cout << "Introduce la primera nota del alumno numero 2" << std::endl;
	std::cin >> nota_b1;
	std::cout << "Introduce la segunda nota del alumno numero 2" << std::endl;
	std::cin >> nota_b2;
	std::cout << "Introduce la tercera nota del alumno numero 2" << std::endl;
	std::cin >> nota_b3;
	if ((0.0<=nota_b1) && (nota_b1<=10.0) && (0.0<=nota_b2) && (nota_b2<=10.0) && (0.0<=nota_b3) && (nota_b3<=10.0)) {
		media_b= (nota_b1 + nota_b2 + nota_b3)/3;
	}
       	else { 
		std::cout << "Introduzca  una nota  válida, de lo contrario el programa no acturá de forma correcta" << std::endl;
        }
	double nota_c1;
        double nota_c2;
        double nota_c3;
	double media_c;
	std::cout << "Introduce la primera nota del alumno numero 3" << std::endl;
	std::cin >> nota_c1;
	std::cout << "Introduce la segunda nota del alumno numero 3" << std::endl;
	std::cin >> nota_c2;
	std::cout << "Introduce la tercera nota del alumno numero 3" << std::endl;
	std::cin >> nota_c3;
	if ((0.0<=nota_c1) && (nota_c1<=10.0) && (0.0<=nota_c2) && (nota_c2<=10.0) && (0.0<=nota_c3) && (nota_c3<=10.0)) {
		media_c= (nota_c1 + nota_c2 + nota_c3)/3;
	}
	else { 
		std::cout << "Introduzca  una nota  válida, de lo contrario el programa no acturá de forma correcta" << std::endl;
        }	
	std::cout << "La media del alumno numero 1 es " << media_a << std::endl;
	std::cout << "La media del alumno numero 2 es " << media_b << std::endl;
	std::cout << "La media del alumno numero 3 es " << media_c << std::endl;

	return 0;
}
