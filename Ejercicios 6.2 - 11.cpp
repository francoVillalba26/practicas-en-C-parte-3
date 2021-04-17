#include <iostream>
#include <cmath>
using namespace std;

double redon(double, int);

int main()
{
	double num1;
	int num2;
	
	cout << "Introduzca el numero decimal: ";
	cin >> num1;
	
	cout << "Introduzca la cantidad de lugares decimales: ";
	cin >> num2;
	cout << endl;
	
	cout << "El numero decimal introducido con " << num2 << " lugares decimales es " << redon(num1, num2) << endl;
	
	return 0;
}

double redon(double a, int b)
{
	double c = a * pow(10.0, b);
	double d = c + 0.5;
	int e = d;
	double f = e / pow(10.0, b);
	
	return f;
}
