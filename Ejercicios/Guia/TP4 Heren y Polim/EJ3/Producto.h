#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>

using namespace std;

class Producto {
protected:
    string nombre;
    double precio;

public:
    Producto(string nombre, double precio);
    virtual double calcularMonto(int cantidad);
    string getNombre();
    double getPrecio();
};

#endif
