#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	double x, y, t, v, theta, angGrad;
	
	angGrad = 22.8;
	theta = (3.1416/180) * angGrad;
	v = 500;
	
	cout << "Valor de x     Valor de y" << endl
	     << "----------     ----------" << endl;
	     
	for (t = 0; t <= 10; t = t + 0.5)
	{
		x = v * t * cos(theta);
		y = v * t * sin(theta);
		
		cout << setw (9) << fixed << setprecision(2) << x
		     << setw(15) << fixed << setprecision(2) << y << endl;
	}
	
	return 0;
}
