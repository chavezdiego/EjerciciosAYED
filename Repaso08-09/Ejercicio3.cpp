/*
3- Dado un struct de alumno que contiene un nombre de 30 caracteres,
una edad que es un entero, un curso que es un caracter y
otra estructura adentro que respresenta sus notas, la cual es un vector de 3 notas
(3 posiciones). Struct nota va a tener un entero valor.
a) Declare un vector con 50 alumnos.
b) Haga una función que dado un alumno, retorne el promedio de sus notas.
c) Dados dos alumnos informar si son del mismo curso.
d) Dado un alumno y un curso, haga una función que cambie de curso a ese alumno.
e) Haga una función que dado un vector de alumnos nos liste solo aquellos alumnos
cuyo promedio de notas es mayor o igual a 9.
f) Dado un vector de alumnos, ordenarlo por edad ascendente.
g) Dado un alumno y un vector de 3 notas, asignarles esas notas a ese alumno.
(es una función).
h) Dado un vector de notas, ordenar el vector por el promedio de notas ascendente.
i) Dado dos vectores de alumnos ordenados por nombre ascendente,
crear un tercer vector con los datos de los dos primeros también ordenados
por alumno (apareo de vectores).
j) Dado un vector de alumnos ordenarlo por código de curso e imprimir
por pantalla el promedio total del promedio por curso. (corte de control).
*/

#include <iostream>
#include <string.h>

using namespace std;

struct Notas{
  int Nota[3];
};

struct Alumno {
  char Nombre[30];
  int Edad;
  char Curso;
  Notas NotasAlum;
};

float PromedioAlumno(Alumno);
void DelMismoCurso (Alumno, Alumno);
void CambioDeCurso (Alumno, char);
void ListProm9 (Alumno[]);
void EdadAscendente(Alumno[]);
void AsignacionNotas(Alumno, int[]);
void OrdNombreAscendente();

int main() {

  int notas[3]={4,5,6};
  Alumno Alumnos[50];
  Alumnos[0].NotasAlum.Nota[0]=5;
  Alumnos[0].NotasAlum.Nota[1]=7;
  Alumnos[0].NotasAlum.Nota[2]=4;

  Alumnos[1].NotasAlum.Nota[0]=9;
  Alumnos[1].NotasAlum.Nota[1]=9;
  Alumnos[1].NotasAlum.Nota[2]=9;

  Alumnos[2].NotasAlum.Nota[0]=10;
  Alumnos[2].NotasAlum.Nota[1]=9;
  Alumnos[2].NotasAlum.Nota[2]=10;

  Alumnos[0].Curso = 'K';

  Alumnos[1].Curso = 'K';

  cout << PromedioAlumno(Alumnos[0]) << endl;

  DelMismoCurso(Alumnos[0],Alumnos[1]);

  CambioDeCurso(Alumnos[0], 'A');

  ListProm9 (Alumnos);

  //EdadAscendente(Alumnos);

  AsignacionNotas(Alumnos[0],notas);

  OrdNombreAscendente();

  return 0;
}


float PromedioAlumno(Alumno Alumn){
  float Prom = 0;
  for (int i = 0; i < 3; i++) {
      Prom+=Alumn.NotasAlum.Nota[i];
  }
  return Prom / 3;
}

void DelMismoCurso (Alumno alum1, Alumno alum2){
  if (alum1.Curso == alum2.Curso) {
    cout << "Son del mismo curso" << endl;
  } else {
    cout << "Son de distinto curso" << endl;
  }
}
 void CambioDeCurso (Alumno alum, char curso){
   alum.Curso = curso;
   cout << "El alumno se cambio al curso " << alum.Curso << endl;
 }

void ListProm9 (Alumno ListAlum[]) {
  Alumno AlumProm9[50];
  int j=0;

  for   (int i = 0; i < 50; i++) {
    if (PromedioAlumno(ListAlum[i]) >= 9) {
      AlumProm9[j] = ListAlum[i];
      j++;
    }
  }

  for (int k = 0; k < 4; k++) {
    cout << PromedioAlumno(AlumProm9[k]) << endl;
  }
}

void EdadAscendente(Alumno ListAlum[]){

    Alumno aux;

    for( int i=0 ; i < 50 - 1  ; i++) {
        for( int j=0 ; j< 50 - i ;j++) {
            if(ListAlum[j].Edad > ListAlum[j+1].Edad) {

                aux=ListAlum[j+1];
                ListAlum[j+1]=ListAlum[j];
                ListAlum[j]=aux;

            }
        }
    }

    for (int i=0; i < 50; i++){

        cout << ListAlum[i].Edad << endl;
    }
}

void AsignacionNotas( Alumno alum, int asignotas[] ){
    for(int i=0; i<3; i++){
        cout << alum.NotasAlum.Nota[i] << "Actuales" <<  endl;
    }
    for(int i=0; i<3; i++){
        alum.NotasAlum.Nota[i] = asignotas[i];
    }
    for(int i=0; i<3; i++){
        cout << alum.NotasAlum.Nota[i] << "Despues" << endl;
    }
}

void OrdNombreAscendente (){
    Alumno aux;
    Alumno AlumPrueba[3];
    //int ascii = 0, ascii2 = 0;

    strcpy(AlumPrueba[0].Nombre, "dsd");
    strcpy(AlumPrueba[1].Nombre, "zsd");
    strcpy(AlumPrueba[2].Nombre, "asd");

    // a = 97   z = 122

    for( int i=0 ; i < 3 ; i++) {
        for( int j=0 ; j < 3 ;j++) {
            if((int)AlumPrueba[j].Nombre[0] > (int)AlumPrueba[j+1].Nombre[0]) {
                aux=AlumPrueba[j+1];
                AlumPrueba[j+1]=AlumPrueba[j];
                AlumPrueba[j]=aux;
            }
        }
    }

    for(int q=0; q < 3; q++){
        cout << AlumPrueba[q].Nombre << endl;
    }
}
