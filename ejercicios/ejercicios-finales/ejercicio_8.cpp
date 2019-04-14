/**
* Escriba un programa en c++, usando funciones, que reciba un numero entrero y devuelva la suma de sus digitos.
*/
#include <iostream>
using namespace std;

int sumarDigitos(int numero);


int main() {
	int numero;
	
	cout << "Ingrese el n�mero entero: ";
	cin >> numero;
	
	/**
	* Tip. La clave de obtener los d�gitos, es dividir sobre 10 y obtener el residuo (Modulo). Se suman los m�dulos, que son los d�gitos invertidos del n�mero
	*/
	cout << "La suma de los d�gitos es: " << sumarDigitos(numero);
	
	return 0;
}

int sumarDigitos(int numero){
	int suma=0; 
	
	if (numero < 10){
		return numero; 
	} else  { 
		while (numero >= 10) { 
			suma += numero % 10; 
			numero =  numero / 10; 
		} 
		suma += numero;
		return suma; 
	} 
}
