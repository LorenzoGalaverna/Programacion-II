#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona {
protected:
    string nombreApellido;
    string dni;
    string estadoCivil;

public:
    Persona(string nombreApellido, string dni, string estadoCivil);
    void cambiarEstadoCivil(string nuevoEstado);
    virtual void imprimirInformacion();
};

#endif
