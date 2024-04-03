// Implementar la clase operaciones. Se deben cargar dos
// valores enteros, calcular su suma, resta, multiplicación y
// división, cada una en un método, imprimir dichos resultados. 

#include "operaciones.h"
#include <iostream>

int main() {
    int valor1, valor2;
    std::cout << "Ingrese dos valores enteros separados por espacio: ";
    std::cin >> valor1 >> valor2;

    Operaciones operacion;
    operacion.cargarValores(valor1, valor2);

    std::cout << "Suma: " << operacion.calcularSuma() << std::endl;
    std::cout << "Resta: " << operacion.calcularResta() << std::endl;
    std::cout << "Multiplicacion: " << operacion.calcularMultiplicacion() << std::endl;

    double division = operacion.calcularDivision();
    if (division != -1) {
        std::cout << "Division: " << division << std::endl;
    } else {
        std::cout << "No se puede dividir por cero." << std::endl;
    }

    return 0;
}