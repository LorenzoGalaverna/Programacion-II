#include "repartidor.h"
#include <iostream>

Repartidor::Repartidor(std::string nombre, int edad, float salario, int zona) : Empleado(nombre, edad, salario), zona(zona) {}

void Repartidor::mostrarInformacion() {
    Empleado::mostrarInformacion();
    std::cout << ", Zona: " << zona << std::endl;
}

void Repartidor::cargarAtributos() {
    Empleado::cargarAtributos();
    std::cout << "Zona: ";
    std::cin >> zona;
}

float Repartidor::plus() {
    if (edad < 25 && zona == 3)
        return 3000;
    return 0;
}

std::string Repartidor::toString() {
    return Empleado::toString() + ", Zona: " + std::to_string(zona);
}
