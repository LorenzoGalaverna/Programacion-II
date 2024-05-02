#include <iostream>
#include "ArreglosEnteros.h"

int main() {
    // Crear dos arreglos
    ArregloEnteros arreglo1(6);
    ArregloEnteros arreglo2(6);

    // Inicializar los arreglos
    for (int i = 0; i < arreglo1.obtenerTamano(); ++i) {
        arreglo1[i] = i + 1;
        arreglo2[i] = i + 2;
    }

    // Sumar los arreglos
    ArregloEnteros suma = arreglo1 + arreglo2;

    // Restar los arreglos
    ArregloEnteros resta = arreglo1 - arreglo2;

    // Calcular el producto escalar
    int producto = arreglo1 * arreglo2;

    // Mostrar los resultados
    std::cout << "Suma: ";
    for (int i = 0; i < suma.obtenerTamano(); ++i) {
        std::cout << suma[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Resta: ";
    for (int i = 0; i < resta.obtenerTamano(); ++i) {
        std::cout << resta[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Producto escalar: " << producto << std::endl;

    return 0;
}
