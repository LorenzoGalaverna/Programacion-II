#include "PersonalServicio.h"
#include <iostream>

PersonalServicio::PersonalServicio(string nombreApellido, string dni, string estadoCivil, string seccion)
    : Persona(nombreApellido, dni, estadoCivil) {
    this->seccion = seccion;
}

void PersonalServicio::trasladarSeccion(string nuevaSeccion) {
    seccion = nuevaSeccion;
}

void PersonalServicio::imprimirInformacion() {
    Persona::imprimirInformacion();
    cout << "Seccion: " << seccion << endl;
}
