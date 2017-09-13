/*
2- Hacer una función que dados tres números enteros modifique el valor del tercer parámetro (entero), con la suma de los dos
primeros parámetros.
*/
#include <iostream>
using namespace std;

void SumaYIntercambio(int&, int, int);

int main() {
  int a, b = 10, c=3;

  SumaYIntercambio(a,b,c);

  cout << a << endl;

  return 0;
}

void SumaYIntercambio(int& a, int b, int c) {
  a = b + c;
}
