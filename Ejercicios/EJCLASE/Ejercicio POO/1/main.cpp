// Desarrollar un programa que cargue los lados de un triángulo e
// implemente los siguientes métodos: inicializar los atributos, imprimir el
// valor del lado mayor y otro método que muestre si es equilátero o no.

#include "triangulo.h"
#include <iostream>

int main() {
    Triangulo triangulo;
    double l1, l2, l3;

    std::cout << "Ingrese el primer lado del triangulo: ";
    std::cin >> l1;
    std::cout << "Ingrese el segundo lado del triangulo: ";
    std::cin >> l2;
    std::cout << "Ingrese el tercer lado del triangulo: ";
    std::cin >> l3;

    triangulo.inicializar(l1, l2, l3);

    triangulo.imprimirLadoMayor();
    triangulo.esEquilatero();

    return 0;
}