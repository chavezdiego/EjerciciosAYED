#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

	int sumatoria = 0;

	for (int i = 0; i < 100; i++)
	{
		cout << "Numero natural: " << i << endl;
	
		sumatoria += i;  // sumatoria = sumatoria + i
	}

	cout << "La sumatoria total es: " << sumatoria << endl;

	return 0;

}