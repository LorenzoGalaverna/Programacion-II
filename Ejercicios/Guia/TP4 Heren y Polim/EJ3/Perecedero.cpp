#include "Perecedero.h"

Perecedero::Perecedero(string nombre, double precio, int diasACaducar) : Producto(nombre, precio) {
    this->diasACaducar = diasACaducar;
}

double Perecedero::calcularMonto(int cantidad) {
    if (diasACaducar == 1)
        return getPrecio() * cantidad / 4;
    else if (diasACaducar == 2)
        return getPrecio() * cantidad / 3;
    else if (diasACaducar == 3)
        return getPrecio() * cantidad / 2;
    else
        return getPrecio() * cantidad;
}
