// Desarrollar un programa que cargue los lados de un triángulo e
// implemente los siguientes métodos: inicializar los atributos, imprimir el
// valor del lado mayor y otro método que muestre si es equilátero o no.

#ifndef CLASE_H
#define CLASE_H

class Triangulo {
private:
    double lado1, lado2, lado3;

public:
    // Constructor
    Triangulo();

    // Métodos
    void inicializar(double l1, double l2, double l3);
    int imprimirLadoMayor();
    void esEquilatero();
};

#endif