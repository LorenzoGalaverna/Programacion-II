#include "Banco.h"

Banco::Banco( string nombre) : nombre(nombre) {}

string Banco::getNombre() {
    return nombre;
}