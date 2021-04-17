#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const double e = 2.71828;
	double Prob, exp;
	int a, t;
	
	a = 2;
	
	cout << "Duracion     Probabilidad\n"
	     << "--------     ------------\n";
	
	for(t = 1; t <= 10; t++)
	{
		exp = -1 * t * a;
		Prob = 1 - (pow(e,exp));
		
		cout << setw(5) << t
		     << setw(16) << fixed << setprecision(2) << Prob << endl;
	}
	
	return 0;
}
