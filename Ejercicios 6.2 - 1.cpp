#include <iostream>
using namespace std;

double encontrarMax(double, double);

int main()
{
	double primernum, segundonum, max;
	
	cout << "\nIntroduzca un numero: ";
	cin >> primernum;
	cout << "¡Estupendo! Por favor introduzca un segundo numero: ";
	cin >> segundonum;
	
	max = encontrarMax(primernum, segundonum);
	
	cout << "\nEl maximo de los dos numero es " << max << endl;
	
	return 0;
}

double encontrarMax(double x, double y)
{
	double numMax;
	
	if(x >= y)
	 numMax = x;
	else
	 numMax = y;
	
	return numMax;
}
