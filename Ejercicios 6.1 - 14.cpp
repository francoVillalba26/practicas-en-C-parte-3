#include <iostream>
using namespace std;

template <class T>
void maximo(T a, T b, T c)
{
	if(a > b && a > c){
		cout << "El numero mas grande es " << a << endl;
	}
	else if(b > a && b > c){
		cout << "El numero mas grande es " << b << endl;
	}
	else if(c > a && c > b){
		cout << "El numero mas grande es " << c << endl;
	}
}

int main()
{
	int num1, num2, num3;
	
	cout << "Introduzca tres numeros: ";
	cin >> num1 >> num2 >> num3;
	
	maximo(num1, num2, num3);
	
	return 0;
}
