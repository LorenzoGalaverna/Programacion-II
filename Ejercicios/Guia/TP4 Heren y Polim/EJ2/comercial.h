#ifndef COMERCIAL_H
#define COMERCIAL_H

#include "empleado.h"

class Comercial : public Empleado {
private:
    float comision;
public:
    Comercial(std::string nombre, int edad, float salario, float comision);
    virtual void mostrarInformacion() override;
    virtual void cargarAtributos() override;
    virtual float plus() override;
    virtual std::string toString() override;
};

#endif
