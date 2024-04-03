// Desarrollar una clase que represente un Cuadrado y tenga
// los siguientes métodos: cargar el valor de su lado, imprimir
// su perímetro y su superficie.

#include "cuadrado.h"
#include <iostream>

int main() {
    double lado;
    std::cout << "Ingrese el valor del lado del cuadrado: ";
    std::cin >> lado;

    Cuadrado cuadrado;
    cuadrado.cargarLado(lado);

    std::cout << "Perimetro del cuadrado: " << cuadrado.calcularPerimetro() << std::endl;
    std::cout << "Superficie del cuadrado: " << cuadrado.calcularSuperficie() << std::endl;

    return 0;
}