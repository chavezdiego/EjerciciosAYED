#include <iostream>

using namespace std;

void main() {

	int fecha1 = 0, fecha2 = 0;

	int DiaActual = 23 , MesActual = 04, fechaActual = 0;

	fechaActual = MesActual * 100 + DiaActual;

	cout << "Hoy es: "<< fechaActual << endl;

	cout << "Ingrese una fecha (MMDD): " << endl;

	cin >> fecha1;

	cout << "Ingrese otra fecha (MMDD): " << endl;

	cin >> fecha2;

	if (fecha1 > fecha2 && fecha1 < fechaActual)
	{
		cout << "La fecha mas reciente es: " << fecha1 << endl;
	}
	else
	{
		cout << "La fecha mas reciente es: " << fecha2 << endl;
	}

	cin.get();
	cin.get();
	
}