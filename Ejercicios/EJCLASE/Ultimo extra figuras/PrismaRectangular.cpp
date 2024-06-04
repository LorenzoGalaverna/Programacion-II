#include "PrismaRectangular.h"

double PrismaRectangular::calcularArea() {
    return 2 * (largo * ancho + ancho * altura + largo * altura);
}

double PrismaRectangular::calcularVolumen() {
    return largo * ancho * altura;
}
