/**
* Escriba un programa en c++, usando funciones,que lea un entero positivo de dos d�gitos y determinar si sus d�gitos son n�meros primos.
*/
#include <iostream>
#include <cmath>
using namespace std;

void obtenerDigitos(int valor);
bool esPrimo(int numero);

int main() {
	int numero;
	cout << "Un n�mero primo, es aquel que s�lo puede dividirse en 1 y en si mismo" << endl;
	cout << "Ingrese el n�mero de dos digitos para determinar sus d�gitos son n�meros primos: " << endl;
	cin >> numero;
	cout << endl;
	
	if (numero >= 10 && numero < 100)
		obtenerDigitos(numero);
	else 
		cout << "No est� definido en el rango de valores";
	
	return 0;
}

void obtenerDigitos(int valor){
	int first = floor(valor/10);
	int second = (valor%10);
	
	if (esPrimo(first))
		cout << "El n�mero " << first << " es PRIMO" << endl;
	else
		cout << "El n�mero " << first << " NO es primo"<< endl;
	
	
	if ( esPrimo(second) )
		cout << "El n�mero " << second << " es PRIMO"<< endl;
	else 
		cout << "El n�mero " << second << " NO es primo"<< endl;
	
}

bool esPrimo(int numero){
	
	if (numero < 2)
		return false;
	
	// Como tomo 2 y 3 para las operaciones, estos son primos
	if (numero == 2 || numero  == 3)
		return true;
	
	if ( (numero % 2) != 0 && (numero % 3) != 0 )
		return true;
	else
		return false;
}


