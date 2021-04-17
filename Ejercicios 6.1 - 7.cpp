#include <iostream>
using namespace std;

void decimal(float a)
{
	int b = a;
	float dec = a - b;
	
	cout << "La parte fraccionaria del numero introducido es " << dec << endl;
}

int main()
{
	float num1;
	
	cout << "Introduzca un numero: ";
	cin >> num1;
	
	decimal(num1);
	
	return 0;
}
