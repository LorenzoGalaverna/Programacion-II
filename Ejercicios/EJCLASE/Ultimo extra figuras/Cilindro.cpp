#include "Cilindro.h"
#include <cmath>

double Cilindro::calcularArea() {
    return 2 * 3.14 * radio * (radio + altura);
}

double Cilindro::calcularVolumen() {
    return 3.14 * radio * radio * altura;
}
