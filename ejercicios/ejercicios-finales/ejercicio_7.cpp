/**
* Escriba un programa en c++, usando funciones, que calcule el �rea y el per�metro de un rect�ngulo dada la base y la altura.
*/
#include <iostream>
using namespace std;


double area(double base, double altura){
	return base*altura;
}

double perimetro(double base, double altura){
	return (base+altura)*2;
}

int main() {
	double base, altura;
	cout << "Ingrese la base del rect�ngulo: ";
	cin >> base;
	cout << "Ingrese la altura del rect�ngulo: ";
	cin >> altura;
	cout << endl;
	cout << "El �rea del rect�ngulo es: " << area(base, altura) << " u^2" << endl;
	cout << "El per�metro del rect�ngulo es: " << perimetro(base, altura) << " u" << endl;
	return 0;
}

