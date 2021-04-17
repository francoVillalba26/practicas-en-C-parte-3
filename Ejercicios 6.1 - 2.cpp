#include <iostream>
using namespace std;

void revisar(int a, double b, double c)
{
	cout << "Los datos introducidos son " << a << " "<< b << " "<< c;
}

int main()
{
	int numEnt;
	double numDec, numReal;
	
	cout << "Introduzca un numero entero ";
	cin >> numEnt;
	
	cout << "Introduzca un numero con decimal: ";
	cin >> numDec;
	
	cout << "Introduzca un numero con real: ";
	cin >> numReal;
	
	revisar (numEnt, numDec, numReal);
	
	return 0;
}
