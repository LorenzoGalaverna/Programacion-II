#include <iostream>
#include "Figura.h"
#include "Rectangulo.h"
#include "Triangulo.h"
#include "Cilindro.h"
#include "PrismaRectangular.h"

int main() {
    Rectangulo* rectangulo = new Rectangulo(3.0, 4.0);
    std::cout << "Área del rectángulo: " << rectangulo->calcularArea() << std::endl;
    std::cout << "Perímetro del rectángulo: " << rectangulo->calcularPerimetro() << std::endl;
    delete rectangulo;

    Triangulo* triangulo = new Triangulo(3.0, 4.0, 3.0, 4.0, 5.0);
    std::cout << "Área del triángulo: " << triangulo->calcularArea() << std::endl;
    delete triangulo;

    Cilindro* cilindro = new Cilindro(2.0, 5.0);
    std::cout << "Volumen del cilindro: " << cilindro->calcularVolumen() << std::endl;
    delete cilindro;

    PrismaRectangular* prisma = new PrismaRectangular(3.0, 4.0, 5.0);
    std::cout << "Volumen del prisma: " << prisma->calcularVolumen() << std::endl;
    delete prisma;

    return 0;
}
