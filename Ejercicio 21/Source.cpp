//Dados N valores informar el mayor, el menor y en que posición del conjunto fueron ingresados.

#include <iostream>
#include <stdlib.h>

using namespace std;

void main() {

	int i = 1, pos1 = 0, pos2 = 0, num = 0;
	int nummax = 0, nummin = 500;

	do
	{
		cout << "Ingrese un numero: ";
		cin >> num;

		if (num != 0)
		{
			if (num > nummax)
			{
				nummax = num;
				pos1 = i;
			}
			if (num < nummin && num != 0)
			{
				nummin = num;
				pos2 = i;
			}

			i++;
		}

	} while (num != 0);

	cout << "El numero mayor es: " << nummax << endl;

	cout << "Su posicion es: " << pos1 << endl;

	cout << "El numero menor es: " << nummin << endl;

	cout << "Su posicion es: " << pos2 << endl;

	system("pause");
}