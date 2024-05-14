#include "comercial.h"
#include <iostream>

Comercial::Comercial(std::string nombre, int edad, float salario, float comision) : Empleado(nombre, edad, salario), comision(comision) {}

void Comercial::mostrarInformacion() {
    Empleado::mostrarInformacion();
    std::cout << ", Comisión: " << comision << "%" << std::endl;
}

void Comercial::cargarAtributos() {
    Empleado::cargarAtributos();
    std::cout << "Comisión (%): ";
    std::cin >> comision;
}

float Comercial::plus() {
    if (edad > 30 && comision > 12)
        return 3000;
    return 0;
}

std::string Comercial::toString() {
    return Empleado::toString() + ", Comisión: " + std::to_string(comision) + "%";
}
