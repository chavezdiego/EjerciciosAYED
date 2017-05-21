#include <iostream>
#include <stdlib.h>

using namespace std;

void main() {

	int mes = 0, año = 0;

	cout << "Ingresar un mes: " << endl;

	cin >> mes;

	cout << "Ingresar un año: " << endl;

	cin >> año;

	// Meses que tienen 30 dias   (4,6,9,11)

	// Meses que tienen 31 dias   (1,3,5,7,8,10,12)

	
	if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
	{
		cout << "El mes " << mes << " tiene 30 dias." << endl;
	}
	else
	{
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
		{
			cout << "El mes " << mes << " tiene 31 dias." << endl;
		}
		else
		{
			if (mes == 2)
			{
				if (año % 4 == 0)
				{
					cout << "El mes " << mes << " tiene 29 dias." << endl;
				}
				else
				{
					cout << "El mes " << mes << " tiene 28 dias." << endl;
				}
			}
			else
			{
				cout << "ERROR en ingreso de datos!!" << endl;
			}
		}
	}

	system("PAUSE");
}