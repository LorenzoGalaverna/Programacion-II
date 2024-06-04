#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Bidimensional.h"

class Triangulo : public Bidimensional {
private:
    double lado1, lado2, lado3;
    double base, altura;
public:
    Triangulo(double base, double altura, double lado1, double lado2, double lado3)
        : base(base), altura(altura), lado1(lado1), lado2(lado2), lado3(lado3) {}
    double calcularArea()  override;
    double calcularPerimetro()  override;
};

#endif
