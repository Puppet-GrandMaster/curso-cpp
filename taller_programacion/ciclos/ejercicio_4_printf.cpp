#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int tabla, n, i;
	
	printf("�Qu� tabla de multiplicar desea?: ");
	scanf("%d", &tabla);
	printf("Hasta que n�mero quiere mostrar la tabla?: ");
	scanf("%d", &n);
	
	for (i=1; i <= n; i++){
		printf("\n %d*%d = %d", tabla, i, (tabla*i));
	}
	
	return 0;
}
