#include <iostream>
#include <cmath>
using namespace std;

float trianRect(float, float);

int main()
{
	float num1, num2;
	
	cout << "Introduzca uno de los catetos del triangulo rectangulo: ";
	cin >> num1;
	
	cout << "Introduzca el otro cateto: ";
	cin >> num2;
	
	cout << "La hipotenusa del triangulo rectangulo es: " << trianRect(num1, num2) << endl;
	
	return 0;
}

float trianRect(float a, float b)
{
	double a_2 = pow(a, 2.0);
	double b_2 = pow(b, 2.0);
	float hipo = sqrt(a_2 + b_2);
	
	return hipo;
	
}
