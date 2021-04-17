#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double galones, litros;
	int cont, numDatos;
	
	cout << "Introduzca el numero de datos que se convertiran: ";
	cin >> numDatos;
	
	for(cont = 1; cont <= numDatos; cont++)
	{
		cout << "Introduzca el valor en galones: ";
		cin >> galones;
		
		litros = galones * 3.785;
		cout << "El valor introducido corresponde a " << litros << " litros." << endl;
		cout << endl;
	}
	
	return 0;
}
