#include <iostream>
using namespace std;

void menor(double a, double b);
void igual(double a, double b);
void mayor(double a, double b);

int main() {
	double a, b;
	cout << "Ingrese el primer n�mero (a): ";
	cin >> a;
	cout << "Ingrese el segundo n�mero (b): ";
	cin >> b;
	
	cout << endl;
	menor(a,b);
	igual(a,b);
	mayor(a,b);
	cout << endl;
	
	return 0;
}

void menor(double a, double b){
	if (a<b)
		cout << "El n�mero a: " << a << " es menor que b: " << b;
}

void igual(double a, double b){
	if (a==b)
		cout << "El n�mero a: "<< a <<" es igual a b: " << b;
}

void mayor(double a, double b){
	if (a>b)
		cout << "El n�mero a: "<< a <<" es mayor que b: "<< b;
}

