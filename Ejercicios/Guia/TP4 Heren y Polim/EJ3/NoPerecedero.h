#ifndef NOPERECEDERO_H
#define NOPERECEDERO_H

#include "Producto.h"

class NoPerecedero : public Producto {
private:
    string tipo;

public:
    NoPerecedero(string nombre, double precio, string tipo);
};

#endif
