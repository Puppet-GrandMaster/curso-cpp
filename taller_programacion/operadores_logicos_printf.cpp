#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	float n, f, g;
	printf("Loter�a Chuch�n");
	printf("\nIngrese uno de los n�meros: ");
	scanf("%f", &n);
	printf("\nIngrese uno de los n�meros: ");
	scanf("%f", &f);
	printf("\nIngrese uno de los n�meros: ");
	scanf("%f", &g);
	
	if ( (n<f && n>g) || (n<g && n>f) ){
		printf("El de la mitad es: %.1f", n);
	}
	
	if ( (f<n && f>g) || (f<g && f>n) ){
		printf("El de la mitad es: %.1f", f);
	}
	
	if ( (g<n && g>f) || (g<f && g>n) ){
		printf("El de la mitad es: %.1f", g);
	}
	
	return 0;

}

