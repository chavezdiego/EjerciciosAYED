#include <iostream>

using namespace std;

void main(){

	int valor = 0;
	float resultA = 0;

	cout << "Ingrese un valor entero: " <<endl;
	
	cin >> valor;

	resultA = valor / 5.00;

	cout << "La quinta parte de dicho valor es: " << resultA << endl;

	cout << "El resto de la division es: " << valor % 5 << endl;

	cout << "La septima parte de valor/5 es: " << resultA / 7 << endl;

	cin.get();
	cin.get();

}