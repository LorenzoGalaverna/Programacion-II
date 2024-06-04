#ifndef CILINDRO_H
#define CILINDRO_H

#include "Tridimensional.h"

class Cilindro : public Tridimensional {
private:
    double radio;
    double altura;
public:
    Cilindro(double radio, double altura) : radio(radio), altura(altura) {}
    double calcularArea() override;
    double calcularVolumen() override;
};

#endif 
