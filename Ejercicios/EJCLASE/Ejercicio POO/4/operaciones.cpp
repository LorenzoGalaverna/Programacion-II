// Implementar la clase operaciones. Se deben cargar dos
// valores enteros, calcular su suma, resta, multiplicación y
// división, cada una en un método, imprimir dichos resultados. 

#include "operaciones.h"

Operaciones::Operaciones() {
    valor1 = 0;
    valor2 = 0;
}

void Operaciones::cargarValores(int v1, int v2) {
    valor1 = v1;
    valor2 = v2;
}

int Operaciones::calcularSuma() {
    return valor1 + valor2;
}

int Operaciones::calcularResta() {
    return valor1 - valor2;
}

int Operaciones::calcularMultiplicacion() {
    return valor1 * valor2;
}

double Operaciones::calcularDivision() {
    // Verificar si se puede realizar la división
    if (valor2 != 0) {
        return static_cast<double>(valor1) / valor2;
    } else {
        // Manejo de error si se intenta dividir por cero
        return -1; // Podría ser otro valor para representar un error
    }
}