#ifndef REPARTIDOR_H
#define REPARTIDOR_H

#include "empleado.h"

class Repartidor : public Empleado {
private:
    int zona;

public:
    Repartidor(std::string nombre, int edad, float salario, int zona);
    virtual void mostrarInformacion() override;
    virtual void cargarAtributos() override;
    virtual float plus() override;
    virtual std::string toString() override;
};

#endif
