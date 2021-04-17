#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, y, t, e;
	
	e = 2.7183;
	
	cout << "valor x      valor y\n"
	     << "-------     ---------\n";
	cout << setiosflags(ios::fixed)
	     << setiosflags(ios::showpoint)
	     << setprecision(4);
	for (t = 4.0; t <= 10.0; t = t + 0.2)
	{
		y = 2 * pow(e,(0.8 * t));
		cout << setw(7) << t
		     << setw(14) << y << endl;
	}
	
	return 0;
}
