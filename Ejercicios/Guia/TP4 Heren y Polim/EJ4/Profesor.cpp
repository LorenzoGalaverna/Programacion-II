#include "Profesor.h"
#include <iostream>

Profesor::Profesor(string nombreApellido, string dni, string estadoCivil, string departamento)
    : Persona(nombreApellido, dni, estadoCivil) {
    this->departamento = departamento;
}

void Profesor::cambiarDepartamento(string nuevoDepartamento) {
    departamento = nuevoDepartamento;
}

void Profesor::imprimirInformacion() {
    Persona::imprimirInformacion();
    cout << "Departamento: " << departamento << endl;
}
