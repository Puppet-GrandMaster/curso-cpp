#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int a, b;
	cout << "Ingrese el numero inferior: ";
	cin >> a;
	cout << "Ingrese el n�mero superior: ";
	cin >> b;
	
	int i = a;
	cout << "Los n�meros Impares del Intervalo son: " << endl;
	while (i <= b){
		if (i%2 != 0){
			cout << i << endl;
		}
		i++;
	}
	
	getch();
	return 0;
}
