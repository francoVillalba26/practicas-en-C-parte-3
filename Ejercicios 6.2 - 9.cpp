#include <iostream>
using namespace std;

double defleMax(double, char);

int main()
{
	double num, deflexion;
	char tipo;
	
	cout << "Introduzca el largo de la viga: ";
	cin >> num;
	
	cout << "Escriba (f) para una viga de piso o (c) para una viga de techo: ";
	cin >> tipo;
	
	if (tipo == 'f' || tipo == 'c'){
		
		deflexion = defleMax(num, tipo);
		cout << "La deflexion maxima permisible es: " << deflexion << endl;
	}
	else{
		cout << "El caracter introducido es invalido." << endl;
	}
	
	return 0;
}

double defleMax(double a, char b)
{
	double D_max;
	
	if(b == 'f'){
		D_max = a / 240.0;
	}
	else if (b == 'c'){
		D_max = a / 180.0;
	}
	
	return D_max;
}
