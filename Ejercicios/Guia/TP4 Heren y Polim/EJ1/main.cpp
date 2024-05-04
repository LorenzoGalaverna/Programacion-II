/*
Se desea obtener un sistema de representación de figuras geométricas. Toda
figura geométrica posee un centro (coordenada x y coordenada y) y posee
además una fórmula para calcular su perímetro y su área.
Es posible definir también la razón superficie/perímetro.
Teniendo en cuenta estas consideraciones obtenga un mecanismo de herencia
que a partir de una clase abstracta FIG_GEO permita generar las clases
derivadas para representar un punto, un círculo y un polígono regular.
Realice pruebas de las clases creadas mediante un programa principal.
*/

// main.cpp

#include "figuras.h"
#include <iostream>

int main() {
    Punto punto(1.0, 2.0);
    Circulo circulo(3.0, 0.0, 0.0);
    PoligonoRegular poligono(6, 4.0);

    std::cout << "Información de las figuras:\n";
    punto.mostrar();
    std::cout << "Perímetro del punto: " << punto.calcularPerimetro() << std::endl;
    std::cout << "Área del punto: " << punto.calcularArea() << std::endl;
    std::cout << "Razón Superficie/Perímetro del punto: " << punto.calcularRazonSuperficiePerimetro() << std::endl;

    circulo.mostrar();
    std::cout << "Perímetro del círculo: " << circulo.calcularPerimetro() << std::endl;
    std::cout << "Área del círculo: " << circulo.calcularArea() << std::endl;
    std::cout << "Razón Superficie/Perímetro del círculo: " << circulo.calcularRazonSuperficiePerimetro() << std::endl;

    poligono.mostrar();
    std::cout << "Perímetro del polígono: " << poligono.calcularPerimetro() << std::endl;
    std::cout << "Área del polígono: " << poligono.calcularArea() << std::endl;
    std::cout << "Razón Superficie/Perímetro del polígono: " << poligono.calcularRazonSuperficiePerimetro() << std::endl;

    return 0;
}
