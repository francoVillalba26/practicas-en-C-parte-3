#include <iostream>
using namespace std;

int main()
{
	double calif, suma, total, prom;
	int i;
	
	total = 0;
	i = 0;
	
	do{
		cout << "Introducir una calificacion: ";
		cin >> calif;
		
		if(calif < 0 || calif > 100){
			
			cout << "La calificacion introducida es invalida." << endl;
			cout << endl;
		}
		else{
			cout << "La calificación introducida es: " << calif << endl;
			cout << endl;
			suma = total + calif;
			total = suma;
			i++;
		}
		
	}while(calif != 999);
	
	prom = total / i;
	
	cout << "El promedio de la suma de las calificaciones validas es: " << prom << endl;
	
	return 0;
}
