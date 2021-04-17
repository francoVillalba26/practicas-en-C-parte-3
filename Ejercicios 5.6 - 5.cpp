#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int MAX_X = 5;
	const int MAX_Z = 6;
	double x, z, y;
	
	cout << "  x         z         y  " << endl
	     << "-----     -----     -----" << endl;
	     
	for (x = 1; x <= MAX_X; x++)
	{
		for (z = 2; z <= MAX_Z; z++){
			if (x == z){
				cout << setw(5) << x
				     << setw(10) << z
				     << setw(23) << "Valor indefinido" << endl;
			}
			else{
				y = (x * z) / (x - z);
				
				cout << setw(5) << noshowpoint << x
				     << setw(10) << noshowpoint << z;
				cout << setw(10) << fixed << setprecision(2) << y << endl;
			}
		}
	}
	
	return 0;
}
