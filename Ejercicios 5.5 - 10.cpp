#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double pobla, e;
	int t, year;
	
	e = 2.7183;
	
	cout << "Año      Poblacion" << endl
	     << "----     ---------" << endl;
	
	for (t = 5; t <= 10; t++)
	{
		pobla = 6.0 * pow(e, (0.02 * t));
		year = 2000 + t;
		
		cout << year
		     << setw(12) << fixed << setprecision(2) << pobla << endl;
	}
	
	return 0;
}
