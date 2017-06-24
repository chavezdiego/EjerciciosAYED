#include <iostream>
#include <string.h>

using namespace std;

struct Alumno {
    int idAlumno;
    char nombre[30]="";
    int notaFinal;
};


// BURBUJA
int main() {
    int tam = 5;
    Alumno vec[5];
    Alumno aux;


    Alumno a;
    a.idAlumno = 4;
    strcpy(a.nombre, "Juancho");
    a.notaFinal = 10;

    vec[0] = a;

    Alumno carla;
    carla.idAlumno = 10;
    strcpy(carla.nombre, "Carlita");
    carla.notaFinal = 4;

    vec[1] = carla;


    a.idAlumno = 5;
    strcpy(a.nombre, "Ana");
    a.notaFinal = 6;

    vec[2] = a;


    a.idAlumno = 1;
    strcpy(a.nombre, "Pepe");
    a.notaFinal = 7;

    vec[3] = a;


    a.idAlumno = 3;
    strcpy(a.nombre, "Bob");
    a.notaFinal = 2;

    vec[4] = a;

    cout << "Array antes de ordenarse: " << endl;
    for (int i = 0; i < tam; i++) {
        cout << vec[i].idAlumno << " ";
        cout << vec[i].nombre << " ";
        cout << vec[i].notaFinal << endl;
    }


    cout << endl << endl;


    // LO ORDENAMOS POR BURBUJA
    for( int i=0 ; i < tam - 1  ; i++) {
        for( int j=0 ; j< tam - i ;j++) {
            // aquí esta la magia
            if(vec[j].idAlumno > vec[j+1].idAlumno) {

                aux=vec[j+1];
                vec[j+1]=vec[j];
                vec[j]=aux;

            }
        }
    }


    cout << "Array ordenado " << endl;
    for (int i = 0; i < tam; i++ ){
        cout << vec[i].idAlumno << " ";
        cout << vec[i].nombre << " ";
        cout << vec[i].notaFinal << endl;
    }



    return 0;
}