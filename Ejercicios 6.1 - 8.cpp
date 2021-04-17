#include <iostream>
using namespace std;

void numerPar(int a)
{
	double par = a % 2;
	
	if (par == 0){
		cout << "El numero introducido es par";
	}
	else{
		cout << "El numero es impar";
	}
}

int main()
{
	int num1;
	
	cout << "Introduci un numero, hijo de puta: ";
	cin >> num1;
	
	numerPar(num1);
	
	return 0;
}
