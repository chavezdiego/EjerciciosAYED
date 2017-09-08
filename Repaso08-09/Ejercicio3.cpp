#include <iostream>

using namespace std;

struct Notas{
  int Nota[3];
};

struct Alumno {
  char Nombre[30] = "";
  int Edad;
  char Curso;
  Notas NotasAlum;
};

float PromedioAlumno(Alumno);
void DelMismoCurso (Alumno, Alumno);
void CambioDeCurso (Alumno, char);
void ListProm9 (Alumno[]);

int main() {
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

  for (int i = 0; i < 50; i++) {
    if (PromedioAlumno(ListAlum[i]) >= 9) {
      AlumProm9[j] = ListAlum[i];
      j++;
    }
  }

  for (int k = 0; k < 4; k++) {
    cout << PromedioAlumno(AlumProm9[k]) << endl;
  }
}
