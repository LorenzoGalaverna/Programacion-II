// Desarrollar una clase que represente un punto en el plano y tenga los
// siguientes métodos: cargar los valores de x e y, imprimir en que
// cuadrante se encuentra dicho punto (concepto matemático, primer
// cuadrante si x e y son positivas, si x<0 e y>0 segundo cuadrante, etc.)

#ifndef PUNTO_H
#define PUNTO_H

class Punto {
private:
    double x, y;

public:
    // Constructor
    Punto();

    // Métodos
    void cargar(double x, double y);
    void determinarCuadrante();
};

#endif