#include <iostream>
#include <cmath>
using namespace std;

void encontrarAbs(double a)
{
	double Abs = abs(a);
	
	cout << "El valor absoluto del numero introducido es " << Abs;
}

int main()
{
	float num;
	cout << "Introduzca un puto numero: ";
	cin >> num;
	
	encontrarAbs(num);
	
	return 0;
}
