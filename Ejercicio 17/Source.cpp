#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main() {

	int i = 0;
	int Sminimo = 0, Smedio = 0, Salto = 0, SmuyAlto = 0;
	float sueldos[50] = {};

	do
	{
		system("cls");

		cout << "Ingrese un sueldo: " << endl;

		cin >> sueldos[i];
		
		if (sueldos[i] != 0)
		{
			if (sueldos[i] < 1520.00)
			{
				Sminimo++;
			}

			if (sueldos[i] >= 1520.00 && sueldos[i] < 2780.00)
			{
				Smedio++;
			}

			if (sueldos[i] >= 2780.00 && sueldos[i] < 5999.00)
			{
				Salto++;
			}

			if (sueldos[i] >= 5999.00)
			{
				SmuyAlto++;
			}
		}
	} while (sueldos[i] != 0 );
	

	cout << "Cantidad de empleados con sueldo minimo son: " << Sminimo << endl;
	cout << "Cantidad de empleados con sueldo medio son: " << Smedio << endl;
	cout << "Cantidad de empleados con sueldo alto son: " << Salto << endl;
	cout << "Cantidad de empleados con sueldo muy alto son: " << SmuyAlto << endl;

	system("Pause");
}