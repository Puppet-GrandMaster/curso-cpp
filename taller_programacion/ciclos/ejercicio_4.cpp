#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int tabla, n, i;
	
	cout << "�Qu� tabla de multiplicar desea?: ";
	cin >> tabla;
	cout << "Hasta que n�mero quiere mostrar la tabla?: ";
	cin >> n;
	
	for (i=1; i <= n; i++){
		cout << "\n" << tabla << "*" << i << " = " << (tabla*i);
	}
	
	return 0;
}
