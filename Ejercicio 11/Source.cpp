#include <iostream>
#include <stdlib.h>

using namespace std;

void main() {

	int	edad = 0;

	cout << "Ingrese una edad: ";

	cin >> edad;

	if (edad <= 12)
	{
		cout << "Es MENOR." << endl;
	}
	if (edad >= 13 && edad <= 18)
	{
		cout << "Es CADETE." << endl;
	}

	if (edad > 18 && edad <= 26)
	{
		cout << "Es JUVENIL." << endl;
	}

	if (edad > 26)
	{
		cout << "Es MAYOR." << endl;
	}

	system("PAUSE");

}
