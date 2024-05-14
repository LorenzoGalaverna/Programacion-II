#ifndef PERSONALSERVICIO_H
#define PERSONALSERVICIO_H

#include "Persona.h"

class PersonalServicio : public Persona {
private:
    string seccion;

public:
    PersonalServicio(string nombreApellido, string dni, string estadoCivil, string seccion);
    void trasladarSeccion(string nuevaSeccion);
    void imprimirInformacion() override;
};

#endif
