#include <iostream>
using namespace std;

template <class T>
void entero(T a)
{
	int b = a;
	
	cout << "El valor entero del dato introducido es " << b;
}

int main()
{
	double num1;
	int num2;
	char car;
	
	cout << "Introduzca un caracter: ";
	cin >> car;
	entero(car);
	cout << endl << endl;
	
	cout << "Introduzca un numero entero: ";
	cin >> num2;
	entero(num2);
	cout << endl << endl;
	
	cout << "Introduzca un numero decimal: ";
	cin >> num1;
	entero(num1);
	cout << endl << endl;
	
	return 0;
}
