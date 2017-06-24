#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Alumnos
{
	int idAlumno;
	char Nombre[30] = "";
	int Notafinal; 
};

int main() {

	int tam = 5;
    int aux;

	Alumnos alum[5];

	alum[0].idAlumno = 4;
	strcpy( alum[0].Nombre, "Juan");
	alum[0].Notafinal = 10;

	alum[1].idAlumno = 10;
	strcpy( alum[1].Nombre, "Carla");
	alum[1].Notafinal = 4;

	alum[2].idAlumno = 5;
	strcpy( alum[2].Nombre, "Ana");
	alum[2].Notafinal = 6;

	alum[3].idAlumno = 1;
	strcpy( alum[3].Nombre, "Pepe");
	alum[3].Notafinal = 7;

	alum[4].idAlumno = 3;
	strcpy( alum[4].Nombre, "Matias");
	alum[4].Notafinal = 2;

	cout << "Array antes de ordenarse: " << endl;
    for (int i = 0; i < tam - 1; i++) {
        cout << alum[i].idAlumno << " ";
    }

    cout << endl << endl;

    for( int i=1 ; i < tam ; i++) {
        for( int j=0 ; j< tam - i ;j++) {
            if(alum[j].idAlumno > alum[j+1].idAlumno) {
                aux=alum[j+1].idAlumno;
                alum[j+1].idAlumno=alum[j].idAlumno;
                alum[j].idAlumno=aux;
            }
        }
    }

    cout << "Array ordenado " << endl;
    for (int i = 0; i < tam; i++ ){
        cout << alum[i].idAlumno << "-";
    }
	
	return 0;
}