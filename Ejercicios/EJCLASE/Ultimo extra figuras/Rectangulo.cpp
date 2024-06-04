#include "Rectangulo.h"

double Rectangulo::calcularArea() {
    return lado1 * lado2;
}

double Rectangulo::calcularPerimetro() {
    return 2 * (lado1 + lado2);
}
