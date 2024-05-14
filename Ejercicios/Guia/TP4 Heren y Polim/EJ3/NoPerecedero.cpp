#include "NoPerecedero.h"

NoPerecedero::NoPerecedero(std::string nombre, double precio, std::string tipo) : Producto(nombre, precio) {
    this->tipo = tipo;
}
