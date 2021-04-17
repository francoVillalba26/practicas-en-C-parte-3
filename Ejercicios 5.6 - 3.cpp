#include <iostream>
using namespace std;

int main()
{
	const int MAXI = 5;
	const int MAXJ = 3;
	int i, j;
	double num, suma, prom, prom2, total2, totalAnt, total;
	
	totalAnt = 0;
	
	for(i = 1; i <= MAXI; i++)
	{
		total = 0;
		
		for (j = 1; j <= MAXJ; j++){
			cout << "Introduzca el voltaje del generador: ";
			cin >> num;
			suma = total + num;
			total = suma;
		}
		prom = total / MAXJ;
		total2 = totalAnt + prom;
		totalAnt = total2;
		
		cout << "El promedio de los voltajes introducidos es: " << prom << endl;
		cout << endl;
	}
	prom2 = total2 / MAXI;
	
	cout << "El promedio total de todos los generadores es: " << prom2 << endl;
	
	return 0;
}
