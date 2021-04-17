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
			
			if (calif == 999){
				break;
		    }
		}
		else if (calif > 0 || calif < 100){
			cout << "\nLa calificacion introducida es: " << calif << endl;
	        cout << endl;
		}
		
	} while(1);
    
	return 0;
}
