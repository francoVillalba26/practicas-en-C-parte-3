#include <iostream>
using namespace std;

int main()
{
	int NUMSMAX, i;
	double usenum, totpos, totneg;
	
	totpos = 0; 
	totneg = 0;
	
	cout << "Introduzca el numero de entradas: ";
	cin >> NUMSMAX;
	
	for (i = 1; i <= NUMSMAX; i++)
	{
		cout << "Introduzca un numero (positivo o negativo): ";
		cin >> usenum;
		if (usenum > 0)
		 totpos = totpos + usenum;
		else
		 totneg = totneg + usenum;
	}
	cout << "El total positivo es " << totpos << endl;
	cout << "El total negativo es " << totneg << endl;
	
	return 0;
}
