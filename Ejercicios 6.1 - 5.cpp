#include <iostream>
using namespace std;

void al_cuadrado(float a)
{
	float cuad = a * a;
	
	cout << "El cuadrado de " << a << " es " << cuad;
}

int main()
{
	float num1;
	
	cout << "Introduzca un numero: ";
	cin >> num1;
	
	al_cuadrado(num1);
	
	return 0;
}
