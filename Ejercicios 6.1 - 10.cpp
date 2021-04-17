#include <iostream>
#include <iomanip>
using namespace std;

void tabla(int a, int b, int c = 1)
{
	int i;
	cout << "Numero     Cuadrado      Cubo " << endl;
	cout << "------     --------     ------" << endl;
	
	for(i = a; i <= a + b; i = i + c)
	{
		cout << setw(4) << i
		     << setw(12) << i * i
		     << setw(13) << i * i * i << endl;
	}
}

int main()
{
	int num1, num2, num3;
	cout << "Introduzca un numero inicial: ";
	cin >> num1;
	
	cout << "Introduzca un numero de valores que se van a desplegar: ";
	cin >> num2;
	
	cout << "Introduzca un numero de incrementos: ";
	cin >> num3;
	
	cout << endl;
	tabla(num1, num2, num3);
	
	return 0;
}
