#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double num, aprox, aproxNueva, aproxAnt, dif;
	
	cout << "Introuduzca un numero: ";
	cin >> num;
	
	cout << "\nIntroduzca una estimacion de la raiz cuadrada del numero anterior: ";
	cin >> aprox;
	
	aproxAnt = aprox;
	
	do{
		aproxNueva = ((num / aproxAnt) + aproxAnt) / 2;
		dif = abs(aproxNueva - aproxAnt);
		aproxAnt = aproxNueva;
		
	}while(dif > 0.00001);
	
	cout << endl;
	cout << setiosflags(ios::showpoint) << setprecision(5);
	
	cout << "La raiz cuadrada de " << num << " es " << aproxNueva << endl;
	
	return 0;
}
