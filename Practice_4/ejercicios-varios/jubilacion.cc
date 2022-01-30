#include <iostream>
using namespace std;

int main(){
	const int fecha_jubilacion = 65;
	cout << "Hola, vamos a calcular la edad que le queda para jubilarse!" << endl;
	int edad_usuario, edad_restante;
	cin >> edad_usuario;
	edad_restante = fecha_jubilacion-edad_usuario;
	cout << "Le quedan " << edad_restante << " años, para jubilarse." << endl;
}
