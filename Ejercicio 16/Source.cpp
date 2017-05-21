#include <iostream>

using namespace std;

int main() {

	int num = 0, cont = 0;

	while (true)
	{
		if (num > 0)
		{
			cout << "El numero ingresado es: " << num << endl;

			cont++;
		}

		cout << "Cantidad de numero positivos ingresados es: " << cont << endl;

		cout << "Ingrese un numero: ";

		cin >> num;
	}
		
	return 0;
}