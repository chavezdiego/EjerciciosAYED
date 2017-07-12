#include <iostream>
#include <string.h>
using namespace std;

struct REG {
    char nombre[20+1]="";
    unsigned int fecha;
};

int fechaSoloDia(unsigned int);
int fechaSoloMes(unsigned int);
int fechaSoloAnio(unsigned int);


int main() {

    REG vec[6];

    strcpy(vec[0].nombre, "Juan");
    vec[0].fecha = 19500519;

    strcpy(vec[1].nombre, "Mirtha");
    vec[1].fecha = 19301224;

    strcpy(vec[2].nombre, "Josesito");
    vec[2].fecha = 19960905;

    strcpy(vec[3].nombre, "Panchito");
    vec[3].fecha = 20081007;

    strcpy(vec[4].nombre, "Pirulon");
    vec[4].fecha = 20081007;

    strcpy(vec[5].nombre, "FIN");
    vec[5].fecha = 00000000;


    int i = 0;
    int posMin = 0;
    unsigned int menorFecha = vec[i].fecha;
    char menorNombre[20+1] = "";
    strcpy(menorNombre, vec[i].nombre);
    REG menorRegistro = vec[i];
    i++;

    // si son iguales las cadenas de texto entonces devuelve 0 (cero)
    while (strcmp(vec[i].nombre,"FIN")){

        if(vec[i].fecha < menorFecha) {
            posMin = i;
            unsigned int menorFecha = vec[i].fecha;
            strcpy(menorNombre, vec[i].nombre);
            menorRegistro = vec[i];
        }

        // Imprimimos solo los que nacieron en días impares
        if(fechaSoloDia(vec[i].fecha) % 2 != 0){
            cout << vec[i].nombre << endl;
        }

        i++;
    }

    cout << "El menor de los leídos es: " << menorRegistro.nombre << endl;
    cout << "La fecha de nacimiento del menor es: " << fechaSoloDia(menorRegistro.fecha)
                                                    << "-" << fechaSoloMes(menorFecha)
                                                    << "-" << fechaSoloAnio(vec[posMin].fecha);


    return 0;
}


int fechaSoloDia(unsigned int fecha){
    return fecha % 100;
}

int fechaSoloAnio(unsigned int fecha){
    return fecha / 10000;
}

int fechaSoloMes(unsigned int fecha){
    return (fecha % 10000) / 100;
}