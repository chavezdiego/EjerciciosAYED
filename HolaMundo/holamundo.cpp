#include <iostream>

using namespace std;

int sumar(int, int);

int main()
{
	int matriz[3][5] = {};

	for (int i = 0; i < 3; ++i)
	{
		for (int e = 0; e < 5; ++e)
		{
			cout << matriz[i][e] << "      ";
		}

		cout << endl << endl;
	}

	return 0;
}

int sumar(int num1, int num2)
{
	return num1 + num2;
}