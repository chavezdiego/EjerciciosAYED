#include <iostream>

using namespace std;
	
int main() {

	int num1 = 0, num2 = 0;

	for (int i = 0; i < 10; i++)
	{
		cout << "Ingrese un numero: ";
		cin >> num2;

		if (num2 >= num1)
		{
			num1 = num2;
		}
	}
	cout << "El numero mayor es: " << num1 << endl;

	return 0;
}