#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main() {

	int num[50] = {};
	int c, acumulador=0, cont=0, prom = 0, acumulador2 = 0;
	
	srand(time(NULL));

	for (c = 0; c <= 49; c++)
	{
		num[c] = -50 + rand() % (201 - 1);
	}

	for (int j = 0; j < 49; j++)
	{
		cout << "Numero: " << num[j] << endl;
	}

	for (int i = 0; i < 49; i++)
	{
		if (num[i] > 100)
		{
			acumulador += num[i];
			cont++;
		}
		
		if (num[i] < -10)
		{
			acumulador2 += num[i];
		}
		
		if (acumulador != 0)
		{
			prom = acumulador / cont;
		}
		
	}
	
	cout << "El promedio de los numeros mayores a 100 es: " << prom << endl;

	cout << "La suma de los numeros menores a -10 es: " << acumulador2 << endl;

	return 0;
}