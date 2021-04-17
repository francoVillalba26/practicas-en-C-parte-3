#include <iostream>
#include <iomanip>
using namespace std;

void tabla(int a)
{
	int i;
	cout << "Numero     Cuadrado      Cubo " << endl;
	cout << "------     --------     ------" << endl;
	
	for(i = 1; i <= a; i++)
	{
		cout << setw(4) << i
		     << setw(12) << i * i
		     << setw(13) << i * i * i << endl;
	}
}

int main()
{
	int num;
	cout << "Introduzca un numero: ";
	cin >> num;
	
	cout << endl;
	tabla(num);
	
	return 0;
}
