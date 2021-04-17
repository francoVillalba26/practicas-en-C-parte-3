#include <iostream>
using namespace std;

int main()
{
	const int MAXNUM = 5;
	double num, num1, num2, num3, num4, num5, mayor;
	int cont;
	
	for (cont = 1; cont <= MAXNUM; cont++)
	{
		cout << "Introduzca un numero: ";
		cin >> num;
		
		if (cont == 1){
			num1 = num;
		}
		else if (cont == 2){
			num2 = num;
			
			if (num1 >= num2){
				cout << "El valor mas grande es " << num1 << endl
				     << "Es el primer numero." << endl;
			    mayor = num1;
			}
			else if (num2 > num1){
				cout << "El valor mas grande es " << num2 << endl
				     << "Es el segundo numero." << endl;
				mayor = num2;
			}
		}
		else if (cont == 3){
			num3 = num;
			
			if (num3 >= num1 && num3 >= num2){
				cout << "El valor mas grande es " << num3 << endl
				     << "Es el tercer numero." << endl;
			    mayor = num3;
			}
			else if (num1 > num2 && num1 > num3){
				cout << "El valor mas grande es " << num1 << endl
				     << "Es el primer numero." << endl;
			    mayor = num1;
			}
			else if (num2 > num1 && num2 > num3){
				cout << "El valor mas grande es " << num2 << endl
				     << "Es el segundo numero." << endl;
			    mayor = num2;
			}
		}
		else if (cont == 4){
			num4 = num;
			
			if (num4 >= mayor){
				cout << "El valor mas grande es " << num4 << endl
				     << "Es el cuarto numero." << endl;
			    mayor = num4;
			}
			else if (num3 >= mayor && num3 > num4){
				cout << "El valor mas grande es " << num3 << endl
				     << "Es el tercer numero." << endl;
			    mayor = num3;
			}
			else if (num2 >= mayor && num2 > num4){
				cout << "El valor mas grande es " << num2 << endl
				     << "Es el segundo numero." << endl;
			    mayor = num2;
			}
			else if (num1 >= mayor && num1 > num4){
				cout << "El valor mas grande es " << num1 << endl
				     << "Es el primer numero." << endl;
			    mayor = num1;
			}
		}
		else{
			num5 = num;
			
			if (num5 >= mayor){
				cout << "El valor mas grande es " << num5 << endl
				     << "Es el quinto numero." << endl;
			    mayor = num5;
			}
			else if (num4 >= mayor && num4 > num5){
				cout << "El valor mas grande es " << num4 << endl
				     << "Es el cuarto numero." << endl;
			    mayor = num4;
			}
			else if (num3 >= mayor && num3 > num5){
				cout << "El valor mas grande es " << num3 << endl
				     << "Es el tercer numero." << endl;
			    mayor = num3;
			}
			else if (num2 >= mayor && num2 > num5){
				cout << "El valor mas grande es " << num2 << endl
				     << "Es el segundo numero." << endl;
			    mayor = num2;
			}
			else if (num1 >= mayor && num1 > num5){
				cout << "El valor mas grande es " << num1 << endl
				     << "Es el primer numero." << endl;
			    mayor = num1;
			}
		}
	}
	
	return 0;
}
