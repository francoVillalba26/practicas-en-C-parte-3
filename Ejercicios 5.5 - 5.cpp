#include <iostream>
using namespace std;

int main()
{
	int NUMSMAX, i, j, k;
	double usenum, totpos, totneg;
	
	totpos = 0; 
	totneg = 0;
	j = 0;
	k = 0;
	
	cout << "Introduzca el numero de entradas: ";
	cin >> NUMSMAX;
	
	for (i = 1; i <= NUMSMAX; i++)
	{
		cout << "Introduzca un numero (positivo o negativo): ";
		cin >> usenum;
		if (usenum > 0)
		{
		 totpos = totpos + usenum;
		 j++;
	    }
	    else if (usenum == 0)
	    {
	    	
	    }
		else
		{
		 totneg = totneg + usenum;
		 k++;
	    }
	}
	cout << "El promedio positivo es " << totpos/j << endl;
	cout << "El promedio negativo es " << totneg/k << endl;
	
	return 0;
}
