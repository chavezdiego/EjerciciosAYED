#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct Persona {
    long dni;
    char nombre[25];
    double altura;
};


int main() {

    // Abro/creo el archivo y guardo su puntero  
    FILE* file = fopen("PERSONAS.DAT","wb+"); 

    // Creacion de los datos a guardar
    Persona vecPersonas[2];
    Persona unaPersona;
    unaPersona.dni = 32668122;
    strcpy(unaPersona.nombre, "Jesús de Laferrere");
    unaPersona.altura = 1.5;
    vecPersonas[0] = unaPersona;

    Persona otraPersona;
    otraPersona.altura = 1.7;
    otraPersona.dni = 2323223;
    strcpy(otraPersona.nombre, "Segunda Persona");

    vecPersonas[1] = otraPersona;

    // Para escribir datos en el archivo
    // (&RegistroAGuardar, ElTamanioDelDato, CantDatos, NombArchivoEscribir)
    fwrite(&unaPersona, sizeof(Persona),1, file); 
    fwrite(&otraPersona, sizeof(Persona),1, file);

    fflush(file); //Baja los datos de memoria a disco
    fclose(file); //Cierra el archivo


    // BONUS TRACK: ayudita para el TP Anual
    for (int i = 1; i <=5 ; i++) {
        char nombre[30] = "mesa_";
        char buffer[3];
        sprintf(buffer, "%d", i);

        cout << buffer << endl;

        strcat(nombre, buffer);

        cout << nombre << endl;
    }
    // fin ayuda TP ANUAL

    Persona unaPersonaVacia;
    FILE* fParaLeer = fopen("PERSONAS.DAT","rb"); // Abrir el archivo para leer

    // (&RegistroAGuardarLosDatosLeidos, ElTamanioDelDato, CantDatosALeer, NombArchivoALeer)
    fread(&unaPersonaVacia, sizeof(Persona), 1, fParaLeer);
    //Los datos se pueden leer como cualquier variable.

    // en este punto de la ejecución, mi "unaPersonaVacia" está paradojicamente LLENA)
    cout << "La persona: " << unaPersonaVacia.nombre << " con DNI: " << unaPersonaVacia.dni << " ahora está llena" << endl;

    fread(&unaPersonaVacia, sizeof(Persona), 1, fParaLeer);
    
    cout << "La persona: " << unaPersonaVacia.nombre << " con DNI: " << unaPersonaVacia.dni << " ahora está llena" << endl;

    return 0;
}