#include <iostream>
using namespace std;

template <class T>
void despliegue(T a)
{
	cout << "El numero introducido es " << a;
}

int main()
{
	double num1;
	int num2;
	char car;
	
	cout << "Introduzca un numero decimal: ";
	cin >> num1;
	despliegue(num1);
	cout << endl << endl;
	
	cout << "Introduzca un numero entero: ";
	cin >> num2;
	despliegue(num2);
	cout << endl << endl;
	
	cout << "Introduzca un caracter: ";
	cin >> car;
	despliegue(car);
	cout << endl << endl;
	
	return 0;
}
