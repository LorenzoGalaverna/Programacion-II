// Implementar la clase operaciones. Se deben cargar dos
// valores enteros, calcular su suma, resta, multiplicación y
// división, cada una en un método, imprimir dichos resultados. 

#ifndef OPERACIONES_H
#define OPERACIONES_H

class Operaciones {
private:
    int valor1;
    int valor2;

public:
    // Constructor
    Operaciones();

    // Método para cargar los valores
    void cargarValores(int v1, int v2);

    // Métodos para calcular la suma, resta, multiplicación y división
    int calcularSuma();
    int calcularResta();
    int calcularMultiplicacion();
    double calcularDivision();
};

#endif