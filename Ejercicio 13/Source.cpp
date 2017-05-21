#include <iostream> 
#include <stdlib.h>

using namespace std;

int main() {

	int num1 = 0, num2 = 0, result = 0;

	cout << "Ingrese un numero natural: " << endl;

	cin >> num1;

	cout << "Ingrese otro numero natural: " << endl;

	cin >> num2;

	for (int i = 0; i < num2; i++)
	{
		result += num1;
	}

	cout << "El resultado es: " << result << endl;

	return 0;
}