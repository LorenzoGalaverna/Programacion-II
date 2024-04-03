// Desarrollar una clase que represente un punto en el plano y tenga los
// siguientes métodos: cargar los valores de x e y, imprimir en que
// cuadrante se encuentra dicho punto (concepto matemático, primer
// cuadrante si x e y son positivas, si x<0 e y>0 segundo cuadrante, etc.)

#include "punto.h"
#include <iostream>

Punto::Punto() {
    x = y = 0.0;
}

void Punto::cargar(double x, double y) {
    this->x = x;
    this->y = y;
}

void Punto::determinarCuadrante() {
    if (x > 0 && y > 0)
        std::cout << "El punto se encuentra en el primer cuadrante." << std::endl;
    else if (x < 0 && y > 0)
        std::cout << "El punto se encuentra en el segundo cuadrante." << std::endl;
    else if (x < 0 && y < 0)
        std::cout << "El punto se encuentra en el tercer cuadrante." << std::endl;
    else if (x > 0 && y < 0)
        std::cout << "El punto se encuentra en el cuarto cuadrante." << std::endl;
    else if (x == 0 && y != 0)
        std::cout << "El punto se encuentra sobre el eje Y." << std::endl;
    else if (x != 0 && y == 0)
        std::cout << "El punto se encuentra sobre el eje X." << std::endl;
    else
        std::cout << "El punto se encuentra en el origen." << std::endl;
}