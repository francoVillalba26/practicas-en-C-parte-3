#include <iostream>
using namespace std;

int main()
{
	int cont, num;
	
	for (cont = 1; cont <= 20;)
	{
		cout << "Introduzca un numero: ";
		cin >> num;
		
		if (num % 3 == 0){
			cout << "El numero " << num << " es divisible por 3." << endl;
			cout << endl;
			
			cont++;
		}
		else{
		}	
	}
	
	return 0;
}
