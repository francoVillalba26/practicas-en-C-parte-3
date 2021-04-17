#include <iostream>
using namespace std;

void funpot(unsigned int a, unsigned int b)
{
	int i, pot;
	
	int potAnt = 1;
	
	for (i = 1; i <= b ; i++){
		pot = potAnt * a;
		potAnt = pot;
	}
	
	cout << "El numero " << a << " elevado a la " << b << " es " << pot << endl;
}

int main()
{
	unsigned int num1, num2;
	
	cout << "Introduzca un numero: ";
	cin >> num1;
	
	cout << "Introduzca un exponente: ";
	cin >> num2;
	
	funpot(num1, num2);
	
	return 0;
}
