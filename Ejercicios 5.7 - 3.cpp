#include <iostream>
using namespace std;

int main()
{
	unsigned int num, numInv, valAnt, resto;
	
	cout << "Introduzca un numero entero positivo: ";
	cin >> num;
	valAnt = num;
	
	cout << "El numero " << num << " con los digitos invertidos es: ";
	
	do{
		numInv = valAnt % 10;
		cout << numInv;
		resto = valAnt / 10;
		valAnt = resto;
	}while(valAnt != 0);
	
	return 0;
}
