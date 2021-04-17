#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double MAXNUMS = 10; 
	const double e = 2.71828;
	double lambda, indLlega;
	int x, fact;
	
	fact = 1;
	
	cout << "Introduzca el numero promedio de llegadas por minuto: ";
	cin >> lambda;
	
	cout << "\nNumero de clientes     Probabilidad de llegada\n"
	     << "------------------     -----------------------\n";
	
	
	for(x = 0 ; x <= MAXNUMS; x++)
	{
		if (x == 0)
		{
			indLlega = ((pow(lambda,x)) * (pow(e,(-1.0 * lambda))))/1.0;
			
			cout << setw(9) << x
		         << setw(27) << fixed << setprecision(2) << indLlega << endl;
		}
		else
		{
		fact = fact * x;
		indLlega = ((pow(lambda,x)) * (pow(e,(-1.0 * lambda))))/fact;
		
		cout << setw(9) << x
		     << setw(27) << fixed << setprecision(2) << indLlega << endl;
	    }
	}
	
	return 0;
}
