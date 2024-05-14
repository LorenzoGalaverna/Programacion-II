#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"

class Profesor : public Persona {
private:
    string departamento;

public:
    Profesor(string nombreApellido, string dni, string estadoCivil, string departamento);
    void cambiarDepartamento(string nuevoDepartamento);
    void imprimirInformacion() override;
};

#endif
