/**
* Escriba un programa en c++, usando funciones,que lea dos n�meros x e y, luego hacer la diferencia x - y;
 si la diferencia es menor o igual a 10, entonces escribir todos los n�mero comprendidos entre y y x.
*/
#include <iostream>
using namespace std;

void showRange(int x, int y);
void mostrar(int x, int y);
void mostrarInverso(int x, int y);

int main(){
	int x, y;
	cout << "Ingrese el primer numero: ";
	cin >> x;
	cout << "Ingrese el segundo n�mero: ";
	cin >> y;
	cout << "Los n�meros comprendidos entre " << x << " y " << y << " son: \n";
	if (x-y <= 10){
		mostrarInverso(x, y);
		//showRange(x, y);
	} else {
		cout << "La diferencia es mayor a 10";
	}
}


// Con ciclo For
void showRange(int x, int y){
	for (int i = y+1; i < x; i++ ){
		cout << i << endl;
	}
}

// Usando recursividad
void mostrar(int x, int y){
	if (x-1==y)
		return;
	else {
		cout << ++y << endl;
		mostrar(x, y);
	}
}

void mostrarInverso(int x, int y){
	if (x==y+1)
		return;
	else {
		cout << --x << endl;
		mostrarInverso(x, y);
	}
}
