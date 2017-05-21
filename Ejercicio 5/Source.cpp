#include <iostream>

using namespace std;

int main (){

	int valor1 = 0, valor2 = 0;

	cout << "Ingrese un valor entero: " << endl;
	cin >> valor1;
	
	cout << "Ingrese otro valor entero distinto al anterior: " << endl;
	cin >> valor2;

	if (valor1 > valor2)
	{
		cout << "El numero mayor entre los dos es: " << valor1 << endl;
	}
	else
	{
		cout << "El numero mayor entre los dos es: " << valor2 << endl;
	}

	return 0;
}