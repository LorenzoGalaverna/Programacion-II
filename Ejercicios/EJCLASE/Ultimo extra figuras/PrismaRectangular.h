#ifndef PRISMARECTANGULAR_H
#define PRISMARECTANGULAR_H

#include "Tridimensional.h"

class PrismaRectangular : public Tridimensional {
private:
    double largo;
    double ancho;
    double altura;
public:
    PrismaRectangular(double largo, double ancho, double altura)
        : largo(largo), ancho(ancho), altura(altura) {}
    double calcularArea() override;
    double calcularVolumen() override;
};

#endif // PRISMARECTANGULAR_H
