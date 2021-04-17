#include <iostream>
using namespace std;

int main()
{
	int i, j, k;
	double num, num2, num3, suma, suma2, suma3, total, total2, total3, fin;
	
	cout << "Introduzca un numero: ";
	cin >> num;
	
	total3 = 0;
	
	for (k = 1; k <= 13; k++)
	{
		suma3 = total3 + num3;
		total3 = suma3;
		fin = total3;
		total2 = 0;
		
		for (j = 1; j <= 12; j++)
		{
			suma2 = total2 + num2;
			total2 = suma2;
			num3 = total2;
			total = 0;
			
			for (i = 1; i <= 7; i++)
			{
				suma = total + num;
		        total = suma;
		        num2 = total;
			}
		}
	}
	
	cout << "El resultado de multiplicar " << num << " por 1001 es " << fin << endl;
	
	return 0;
}
