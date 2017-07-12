#include <iostream>

using namespace std;

struct FechaNacimiento {
    unsigned char dia;
    unsigned char mes;
    unsigned short anio;
};

struct Primero {
    char nombre[20+1]="";
    FechaNacimiento fechaNacimiento;
};

struct Calificaciones{
    unsigned char nota1;
    unsigned char nota2;
    unsigned char nota3;
};

struct ApellidoNombre {
    char apellido[20+1]="";
    char nombre[20+1]="";
};

struct Segundo {
    unsigned int legajo;
    ApellidoNombre apellidoNombre;
    Calificaciones calificaciones;
};



int main() {

    Primero p;
    p.nombre;  // accedo al nombre
    p.fechaNacimiento; // => Accede al struct completo FechaNamiento
    p.fechaNacimiento.dia; // accedo la dia de la fecha de nacimiento
    p.fechaNacimiento.mes;
    p.fechaNacimiento.anio;


    Segundo s;
    s.legajo; // le accedo al legajo

    s.calificaciones.nota1;
    s.calificaciones.nota2;
    s.calificaciones.nota3;

    s.apellidoNombre; //le accedería al registro COMPLETO de NombreApellido

    s.apellidoNombre.nombre;
    s.apellidoNombre.apellido;

    return 0;
}