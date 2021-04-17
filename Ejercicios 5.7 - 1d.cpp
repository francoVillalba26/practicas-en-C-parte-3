#include <iostream>
using namespace std;

int main()
{
	float calif;
	int i;
	
	do{
		cout << "Introduzca una calificacion: ";
		cin >> calif; 
		
			if(calif < 0 || calif > 100){
				cout << "La calificacion introducida no es valida." << endl;
			    cout << endl;
			    i++;	
	        }
		    else if (calif > 0 || calif < 100){
		    	cout << "\nLa calificacion introducida es: " << calif << endl;
	            cout << endl;
		    }
	    
	} while(i < 5);
    
	return 0;
}
