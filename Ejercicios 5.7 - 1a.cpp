#include <iostream>
using namespace std;

int main()
{
	float calif;
	
	do{
		cout << "Introduzca una calificacion: ";
		cin >> calif; 
	} while(calif < 0 || calif > 100);
	
	cout << "\nLa calificacion introducida es: " << calif;
	cout << endl;
	
	return 0;
}
