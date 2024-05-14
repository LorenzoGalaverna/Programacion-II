#include "Producto.h"

Producto::Producto(string nombre, double precio) {
    this->nombre = nombre;
    this->precio = precio;
}

double Producto::calcularMonto(int cantidad) {
    return precio * cantidad;
}

string Producto::getNombre() {
    return nombre;
}

double Producto::getPrecio() {
    return precio;
}
