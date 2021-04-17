#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double galones, litros;
	int cont;
	
	for(cont = 1; cont <= 10; cont++)
	{
		cout << "Introduzca el valor en galones: ";
		cin >> galones;
		
		litros = galones * 3.785;
		cout << "El valor introducido corresponde a " << litros << " litros." << endl;
		cout << endl;
	}
	
	return 0;
}
