#include <iostream>
using namespace std;

int main()
{
	float calif;
	
	do{
		cout << "Introduzca una calificacion: ";
		cin >> calif; 
		
		if(calif < 0 || calif > 100){
			cout << "La calificacion introducida no es valida." << endl;
			cout << endl;
		}
	} while(calif < 0 || calif > 100);
	
	cout << "\nLa calificacion introducida es: " << calif;
	cout << endl;
	
	return 0;
}
