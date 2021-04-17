#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double funcion_y (double num){
	
	double y = (3 * pow(num, 2)) + (2 * num) - 2; 
		
	return y;
}

double deriva_y (double num){
	
	double yDer = (6 * num) + 2;
	
	return yDer;
}

int main()
{
	double xAnt, yAnt, yDerAnt, aprox, dif;
	
	cout << "Introduzca una aproximacion para la raiz: ";
	cin >> xAnt;
	cout << endl;
	
	cout << "aprox      funcion     derivada" << endl
	     << "------     -------     --------" << endl;
	
	do{
		yAnt = funcion_y(xAnt);
		yDerAnt = deriva_y(xAnt);
		aprox = xAnt - (yAnt / yDerAnt);
		
		cout << setw(6) << fixed << setprecision(4) << xAnt
		     << setw(12) << fixed << setprecision(4) << yAnt
		     << setw(12) << fixed << setprecision(4) << yDerAnt << endl;
		     
		dif = abs(aprox - xAnt);
		xAnt = aprox;
		
	}while(dif > 0.00001);
	
	cout << endl;
	cout << "La raiz de la funcion es " << aprox << endl;
	
	return 0;
}
