#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int celsius, fahren, cont;
	
	for (cont = 1; cont <= 6; cont++)
	{
		cout << "Introduzca una temperatura Fahrenheit: ";
		cin >> fahren;
		
		celsius = (5.0/9.0) * (fahren - 32);
		cout << "La temperatura en grados celsius es " << celsius << endl;
		cout << endl;
	}
	
	return 0;
}
