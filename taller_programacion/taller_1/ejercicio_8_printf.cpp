#include <iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/**
* 8. Leer un n�mero y escribir el valor absoluto del mismo
*/

float number;

int main(int argc, char *argv[]) {
	system("color F0");
	
	printf("Ingrese un n�mero: ");
	scanf("%f", &number);
	
	printf("\nEl valor absoluto de |%.2f| es %.2f", number, abs(number));
	
	return 0;
}

