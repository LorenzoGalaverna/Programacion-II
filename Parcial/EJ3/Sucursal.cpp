#include "sucursal.h"
#include "CajaSeguridad.h"

Sucursal::Sucursal(string nombre, int numero, string responsable)
    : Banco(nombre), numero(numero), responsable(responsable), cajaSeguridad(nullptr) {}

int Sucursal::getNumero() {
    return numero;
}

string Sucursal::getResponsable() {
    return responsable;
}

void Sucursal::setCajaSeguridad(CajaSeguridad* caja) {
    cajaSeguridad = caja;
}

void Sucursal::cargarDatosCajaSeguridad(int codigo) {
        cajaSeguridad->setCodigo(codigo);
}

int Sucursal::getCodigoCajaSeguridad() {
    if (cajaSeguridad) {
        return cajaSeguridad->getCodigo();
    } else {
        return 0;
    }
}
