#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
protected:
    std::string nombre;
    int edad;
    float salario;

public:
    Empleado(std::string nombre, int edad, float salario);
    virtual ~Empleado() {}
    virtual void mostrarInformacion();
    virtual void cargarAtributos();
    virtual float plus() = 0;
    virtual std::string toString();
};

#endif
