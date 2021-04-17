#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int G = 32;
	const int MAXSEG = 10;
	double dist, distTotal, distAnt, distSuma;
	int t;
	
	distAnt = 0;
	
	cout << "Tiempo     Dist en el intervalo actual     Distancia total" << endl
	     << "------     ---------------------------     ---------------" << endl;
	
	for (t = 0; t <= MAXSEG; t++)
	{
		dist = (1.0/2.0) * G * (pow(t,2));
		distSuma = distAnt + dist;
		
		cout << setw(4) << t
		     << setw(24) << fixed << setprecision(2) << dist
		     << setw(25) << fixed << setprecision(2) << distSuma << endl;
		
		distAnt = distSuma;
	}
	
	return 0;
}
