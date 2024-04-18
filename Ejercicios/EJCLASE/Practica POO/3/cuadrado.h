// Desarrollar una clase que represente un Cuadrado y tenga
// los siguientes métodos: cargar el valor de su lado, imprimir
// su perímetro y su superficie.

#ifndef CUADRADO_H
#define CUADRADO_H

class Cuadrado {
private:
    double lado;

public:
    // Constructor
    Cuadrado();

    // Método para cargar el valor del lado
    void cargarLado(double valor);

    // Métodos para calcular el perímetro y la superficie
    double calcularPerimetro();
    double calcularSuperficie();
};

#endif