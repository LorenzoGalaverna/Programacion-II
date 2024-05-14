#include "Estudiante.h"
#include <iostream>

Estudiante::Estudiante(string nombreApellido, string dni, string estadoCivil, string curso)
    : Persona(nombreApellido, dni, estadoCivil) {
    this->curso = curso;
}

void Estudiante::matricularEnCurso(string nuevoCurso) {
    curso = nuevoCurso;
}

void Estudiante::imprimirInformacion() {
    Persona::imprimirInformacion();
    cout << "Curso: " << curso << endl;
}
