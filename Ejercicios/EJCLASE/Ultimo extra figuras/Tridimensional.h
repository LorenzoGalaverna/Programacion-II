#ifndef TRIDIMENSIONAL_H
#define TRIDIMENSIONAL_H

#include "Figura.h"

class Tridimensional : public Figura {
public:
    virtual double calcularVolumen();
};

#endif