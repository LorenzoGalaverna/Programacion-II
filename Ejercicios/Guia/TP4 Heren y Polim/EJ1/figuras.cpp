// figuras.cpp

#include "figuras.h"
#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846

// Implementación de Punto
Punto::Punto(double x, double y) : x(x), y(y) {}

double Punto::calcularPerimetro() const {
    return 0.0;
}

double Punto::calcularArea() const {
    return 0.0;
}

double Punto::calcularRazonSuperficiePerimetro() const {
    return 0.0; // No se puede calcular para un punto
}

void Punto::mostrar() const {
    std::cout << "Punto en (" << x << ", " << y << ")\n";
}

// Implementación de Circulo
Circulo::Circulo(double radio, double centroX, double centroY) : radio(radio), centroX(centroX), centroY(centroY) {}

double Circulo::calcularPerimetro() const {
    return 2 * M_PI * radio;
}

double Circulo::calcularArea() const {
    return M_PI * radio * radio;
}

double Circulo::calcularRazonSuperficiePerimetro() const {
    return calcularArea() / calcularPerimetro();
}

void Circulo::mostrar() const {
    std::cout << "Círculo de radio " << radio << " centrado en (" << centroX << ", " << centroY << ")\n";
}

// Implementación de PoligonoRegular
PoligonoRegular::PoligonoRegular(int numLados, double longitudLado) : numLados(numLados), longitudLado(longitudLado) {}

double PoligonoRegular::calcularPerimetro() const {
    return numLados * longitudLado;
}

double PoligonoRegular::calcularArea() const {
    return (numLados * longitudLado * longitudLado) / (4 * tan(M_PI / numLados));
}

double PoligonoRegular::calcularRazonSuperficiePerimetro() const {
    return calcularArea() / calcularPerimetro();
}

void PoligonoRegular::mostrar() const {
    std::cout << "Polígono regular de " << numLados << " lados, con longitud de lado " << longitudLado << "\n";
}
