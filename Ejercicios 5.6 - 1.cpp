#include <iostream>
using namespace std;

int main()
{
	const int MAXI = 4;
	const int MAXJ = 6;
	double total, suma, prom, num;
	int i, j;
	
	for (i = 1; i <= MAXI; i++)
	{
		total = 0;
		
		for(j = 1; j <= MAXJ; j++){
			cout << "Introduzca un numero: ";
			cin >> num;
			suma = total + num;
			total = suma;
		}
		 prom = total / MAXJ;
		 
		 cout << "El promedio de los numeros introducidos es " << prom << endl;
		 cout << endl; 
	}	
	
	return 0;
}
