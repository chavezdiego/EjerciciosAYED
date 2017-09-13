/*
1- Hacer una función que intercambie dos números enteros que recibe como
parámetro tanto el prototipo como en el desarrollo.
*/

#include <iostream>
using namespace std;

void intercambiameesta(int&, int&);

int main() {

  int a = 5;
  int b = 10;
  intercambiameesta(a,b);
  cout << "tu numero de mierda es:" << a << endl;
  cout << "tu segundo numero:" << b << endl;
  cout << "Che mijo, compilame esto." << endl;


  return 0;
}

void intercambiameesta(int& a, int& b){
  int aux = a;
  a = b;
  b = aux;
}
