#include <iostream>
#include "Estudiante.h"
#include "Profesor.h"
#include "PersonalServicio.h"

int main() {
    Estudiante estudiante("Juan Perez", "12345678", "Soltero", "1A");
    Profesor profesor("Maria Garcia", "87654321", "Casado", "Matematicas");
    PersonalServicio personal("Luis Martinez", "13579246", "Viudo", "Biblioteca");

    estudiante.imprimirInformacion();
    profesor.imprimirInformacion();
    personal.imprimirInformacion();

    estudiante.cambiarEstadoCivil("Casado");
    estudiante.matricularEnCurso("2B");
    profesor.cambiarDepartamento("Informatica");
    personal.trasladarSeccion("Decanato");

    cout << "Despues de los cambios:" << endl;
    estudiante.imprimirInformacion();
    profesor.imprimirInformacion();
    personal.imprimirInformacion();

    return 0;
}
