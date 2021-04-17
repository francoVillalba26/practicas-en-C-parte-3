#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	const int G = 32;
	const int MAXDIST = 50000;
	double dist, distTotal, distAnt, distSuma;
	double t;

    t = 1;
	distAnt = 0;
	
	cout << "Tiempo     Dist en el intervalo actual     Distancia total" << endl
	     << "------     ---------------------------     ---------------" << endl;
	
	for (t; distSuma <= MAXDIST; t)
	{
		if(distSuma <= 49500)
		{
		    dist = (1.0/2.0) * G * (pow(t,2));
		    distSuma = distAnt + dist;
		
		    cout << setw(6) << t
		         << setw(24) << fixed << setprecision(2) << dist
		         << setw(25) << fixed << setprecision(2) << distSuma << endl;
		
		    distAnt = distSuma;
	    }
	    else
	    {
	       	t = 0.1;
		    dist = (1.0/2.0) * G * (pow(t,2));
		    distSuma = distAnt + dist;
		
		    cout << setw(6) << t
		         << setw(24) << fixed << setprecision(2) << dist
		         << setw(25) << fixed << setprecision(2) << distSuma << endl;
		
		    distAnt = distSuma;
	    }
	}
	
	return 0;
}
