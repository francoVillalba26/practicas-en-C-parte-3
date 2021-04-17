#include <iostream>
#include <cmath>
using namespace std;

double cargaC(double, double, double, double);

int main()
{
	double num1, num2, num3, num4, carga;
	
	cout << "Introduzca el modulo de elasticidad: ";
	cin >> num1;
	
	cout << "Introduzca el area de corte transversal: ";
	cin >> num2;
	
	cout << "Introduzca el largo de la columna: ";
	cin >> num3;
	
	cout << "Introduzca el radio de giro: ";
	cin >> num4;
	
	carga = cargaC(num1, num2, num3, num4);
	
	cout << "La carga critica de la columna es: " << carga << endl;
	
	return 0;
}

double cargaC(double E, double A, double L, double r)
{
	double const PI = 3.1416;
	
	double Pcr = (pow(PI, 2.0) * E * A) / pow((L / r),2.0);
	
	return Pcr;
}
