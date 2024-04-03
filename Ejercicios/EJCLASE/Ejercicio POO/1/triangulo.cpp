// Desarrollar un programa que cargue los lados de un triángulo e
// implemente los siguientes métodos: inicializar los atributos, imprimir el
// valor del lado mayor y otro método que muestre si es equilátero o no.

#include "triangulo.h"
#include <iostream>

Triangulo::Triangulo() {
    lado1 = lado2 = lado3 = 0.0;
}

void Triangulo::inicializar(double l1, double l2, double l3) {
    lado1 = l1;
    lado2 = l2;
    lado3 = l3;
}

void Triangulo::imprimirLadoMayor() {
    double mayor = lado1;
    if (lado2 > mayor)
        mayor = lado2;
    if (lado3 > mayor)
        mayor = lado3;
    std::cout << "El lado mayor es: " << mayor << std::endl;
}

void Triangulo::esEquilatero() {
    if (lado1 == lado2 && lado2 == lado3)
        std::cout << "El triangulo es equilátero." << std::endl;
    else
        std::cout << "El triangulo no es equilátero." << std::endl;
}