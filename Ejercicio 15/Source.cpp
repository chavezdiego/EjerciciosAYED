#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main() {

	int TipoInfrac[20] = {};
	int ValorMulta[20] = {};
	char GravInfrac[20] = "";

	int MultaTotal = 0, cont = 0;

	srand(time(NULL));

	for (int i = 0; i < 20; i++)
	{
		TipoInfrac[i] = 1 + rand() % (5 - 1);

		switch (1 + rand() % (4 - 1))
		{
		case 1: GravInfrac[i] = 'L';
				ValorMulta[i] = 100;
			break;
		
		case 2: GravInfrac[i] = 'M';
				ValorMulta[i] = 200;
			break;
		
		case 3: GravInfrac[i] = 'G';
				ValorMulta[i] = 300;
			break;
		}

		MultaTotal += ValorMulta[i];

		cout << TipoInfrac[i] << " " << GravInfrac[i] << " " << ValorMulta[i] << endl;

		if ((TipoInfrac[i]  == 3 || TipoInfrac[i] == 4) && GravInfrac[i] == 'G')
		{
			cont++;
		}

	}

	cout << "El valor total de la multa es: " << MultaTotal << endl;

	if (cont > 3)
	{
		cout << "Clausurar fábrica" << endl;
	}

	system("PAUSE");
}