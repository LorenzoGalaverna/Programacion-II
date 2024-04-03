// Desarrollar una clase que represente un punto en el plano y tenga los
// siguientes métodos: cargar los valores de x e y, imprimir en que
// cuadrante se encuentra dicho punto (concepto matemático, primer
// cuadrante si x e y son positivas, si x<0 e y>0 segundo cuadrante, etc.)

#include "punto.h"
#include <iostream>

int main() {
    Punto punto;
    double x, y;

    std::cout << "Ingrese la coordenada x del punto: ";
    std::cin >> x;
    std::cout << "Ingrese la coordenada y del punto: ";
    std::cin >> y;

    punto.cargar(x, y);

    punto.determinarCuadrante();

    return 0;
}