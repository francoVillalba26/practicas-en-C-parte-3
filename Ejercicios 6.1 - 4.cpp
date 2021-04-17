#include <iostream>
using namespace std;

void mult(float a, float b)
{
	float multi = a * b;
	
	cout << "\nEl producto entre " << a << " y " << b << " es " << multi << endl;
}

int main()
{
	float num1, num2;
	
	cout << "Introduci un numero, pelotudo: ";
	cin >> num1;
	
	cout << "\nIntroduci otro numero, idiota: ";
	cin >> num2;
	
	mult(num1, num2);
	
	return 0;
}
