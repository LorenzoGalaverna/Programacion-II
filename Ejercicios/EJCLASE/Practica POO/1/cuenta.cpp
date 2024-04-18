#include "Cuenta.h"
#include <iostream>

Cuenta::Cuenta(string titular){
    this->titular = titular;
    this->cantidad = (0.0);
}

Cuenta::Cuenta(string titular, double cantidad){
    this->titular = titular;
    this->cantidad = cantidad;
}

string Cuenta::getTitular() {
    return titular;
}

void Cuenta::setTitular(string tit) {
    titular = tit;
}

double Cuenta::getCantidad() {
    return cantidad;
}

void Cuenta::setCantidad(double cant) {
    cantidad = cant;
}

void Cuenta::ingresar(double monto) {
    this->cantidad += monto;
}

void Cuenta::retirar(double monto) {
    if (this->cantidad <= monto){
        this->cantidad=0;
    } else {
        this->cantidad -= monto;
    }
}
