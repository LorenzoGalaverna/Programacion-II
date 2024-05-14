#ifndef PERECEDERO_H
#define PERECEDERO_H

#include "Producto.h"

class Perecedero : public Producto {
private:
    int diasACaducar;

public:
    Perecedero(string nombre, double precio, int diasACaducar);
    double calcularMonto(int cantidad) override;
};

#endif
