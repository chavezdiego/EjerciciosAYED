#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int M = 0, mult3 = 0, mult5 = 0;

	cout << "Ingrese un numero: ";
	cin >> M;

	cout << "Los primeros " << M << " multiplos de 3 son:" << endl;

	for (int i = 1; i <= M; i++)
	{
		mult3 = 3 * i;

		mult5 = mult3 % 5;

		if (mult5 != 0)
		{
			cout << mult3 << endl;
		}
	}
	return 0;
}