#include "Triangulo.h"

double Triangulo::calcularArea()  {
    return (base * altura) / 2;
}

double Triangulo::calcularPerimetro()  {
    return lado1 + lado2 + lado3;
}
