#include "Persona.h"
#include <iostream>

Persona::Persona(string nombreApellido, string dni, string estadoCivil) {
    this->nombreApellido = nombreApellido;
    this->dni = dni;
    this->estadoCivil = estadoCivil;
}

void Persona::cambiarEstadoCivil(string nuevoEstado) {
    estadoCivil = nuevoEstado;
}

void Persona::imprimirInformacion() {
    cout << "Nombre y Apellido: " << nombreApellido << endl;
    cout << "DNI: " << dni << endl;
    cout << "Estado Civil: " << estadoCivil << endl;
}
