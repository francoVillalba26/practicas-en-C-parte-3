#include <iostream>
using namespace std;

template <class T>
void al_cuadrado(T a)
{
	T b = a * a;
	
	cout << "El cuadrado del valor introducido es " << b << endl;
}

int main()
{
	double num1;
	
	cout << "Introduzca un numero: ";
	cin >> num1;
	al_cuadrado(num1);
}
