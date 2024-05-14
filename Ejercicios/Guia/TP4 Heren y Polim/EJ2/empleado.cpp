#include "empleado.h"
#include <iostream>

Empleado::Empleado(std::string nombre, int edad, float salario) 
{
    this->nombre = nombre;
    this->edad = edad;
    this->salario = salario;
}

void Empleado::mostrarInformacion() {
    std::cout << toString() << std::endl;
}

void Empleado::cargarAtributos() {
    std::cout << "Nombre: ";
    std::cin >> nombre;
    std::cout << "Edad: ";
    std::cin >> edad;
    std::cout << "Salario: ";
    std::cin >> salario;
}

std::string Empleado::toString() {
    return "Nombre: " + nombre + ", Edad: " + std::to_string(edad) + ", Salario: $" + std::to_string(salario);
}
