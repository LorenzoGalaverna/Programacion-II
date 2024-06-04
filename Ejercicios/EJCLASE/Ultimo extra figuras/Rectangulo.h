#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Bidimensional.h"

class Rectangulo : public Bidimensional {
private:
    double lado1;
    double lado2;
public:
    Rectangulo(double lado1, double lado2) : lado1(lado1), lado2(lado2) {}
    double calcularArea() override;
    double calcularPerimetro() override;
};

#endif // RECTANGULO_H
