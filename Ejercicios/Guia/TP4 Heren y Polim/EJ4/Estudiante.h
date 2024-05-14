#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Persona.h"

class Estudiante : public Persona {
private:
    string curso;

public:
    Estudiante(string nombreApellido, string dni, string estadoCivil, string curso);
    void matricularEnCurso(string nuevoCurso);
    void imprimirInformacion() override;
};

#endif
