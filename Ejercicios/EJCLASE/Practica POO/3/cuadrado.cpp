// Desarrollar una clase que represente un Cuadrado y tenga
// los siguientes métodos: cargar el valor de su lado, imprimir
// su perímetro y su superficie.

#include "cuadrado.h"

Cuadrado::Cuadrado() {
    lado = 0.0;
}

void Cuadrado::cargarLado(double valor) {
    lado = valor;
}

double Cuadrado::calcularPerimetro() {
    return 4 * lado;
}

double Cuadrado::calcularSuperficie() {
    return lado * lado;
}