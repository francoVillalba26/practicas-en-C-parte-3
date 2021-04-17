#include <iostream>
using namespace std;

int main()
{
	int MAXI;
	double total, suma, prom, num;
	int i;
	
	cout << "Introduzca el numero de resultados de prueba: ";
	cin >> MAXI;
	cout << endl;
		
	for (i = 1; i <= MAXI; i++)
	{
		cout << "Introduzca un numero: ";
		cin >> num;
		suma = total + num;
		total = suma;
		
	}
	prom = total / MAXI;
	cout << "El promedio de los numeros introducidos es " << prom << endl;
	cout << endl;
	total = 0;
	
	cout << "Introduzca el numero de resultados de prueba: ";
	cin >> MAXI;
	cout << endl;
		
	for (i = 1; i <= MAXI; i++)
	{
		cout << "Introduzca un numero: ";
		cin >> num;
		suma = total + num;
		total = suma;
		
	}
	prom = total / MAXI;
	cout << "El promedio de los numeros introducidos es " << prom << endl;
	cout << endl;
	total = 0;
	
	cout << "Introduzca el numero de resultados de prueba: ";
	cin >> MAXI;
	cout << endl;
		
	for (i = 1; i <= MAXI; i++)
	{
		cout << "Introduzca un numero: ";
		cin >> num;
		suma = total + num;
		total = suma;
		
	}
	prom = total / MAXI;
	cout << "El promedio de los numeros introducidos es " << prom << endl;
	cout << endl;
	total = 0;
	
	cout << "Introduzca el numero de resultados de prueba: ";
	cin >> MAXI;
	cout << endl;
		
	for (i = 1; i <= MAXI; i++)
	{
		cout << "Introduzca un numero: ";
		cin >> num;
		suma = total + num;
		total = suma;
		
	}
	prom = total / MAXI;
	cout << "El promedio de los numeros introducidos es " << prom << endl;
	cout << endl;
	total = 0;
	
	return 0;
}
