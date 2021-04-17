#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	unsigned int n, fib, fib1Ant, fib2Ant, cont;
	
	cout << "Este programa calcula el n termino de la secuencia de Fibonacci\n" << endl;
	cout << "Introduzca un numero: ";
	cin >> n;
	
	fib1Ant = 1;
	fib2Ant = 0;
	
	if (n == 1)
		{
			cout << "El termino correspondiente al lugar " << n
			     << " de la secuencia de Fibonacci es 0" << endl;
		}
		else if (n == 2)
		{
			cout << "El termino correspondiente al lugar " << n
			     << " de la secuencia de Fibonacci es 1" << endl;
		}
		else
		{
			for (cont = 1; cont <= (n - 2); cont++)
			{
				fib = fib1Ant + fib2Ant;
		        fib2Ant = fib1Ant;
		        fib1Ant = fib; 
			}
			
			cout << "El termino correspondiente al lugar " << n
		         << " de la secuencia de Fibonacci es: " << endl
				 << "--> " << fib << endl;
		}
	
	return 0;
}
