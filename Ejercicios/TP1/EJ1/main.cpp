#include <iostream>
#include "libreria.h"
#include <string>

// int main() {
//     int X, Y, D;

//     std::cout << "Ingrese la posicion inicial (X): ";
//     std::cin >> X;

//     std::cout << "Ingrese la posicion final (Y): ";
//     std::cin >> Y;

//     std::cout << "Ingrese la distancia de salto (D): ";
//     std::cin >> D;

//     int saltos_minimos = calcularSaltos(X, Y, D);
//     std::cout << "El minimo numero de saltos necesarios es: " << saltos_minimos << std::endl;

//     return 0;
// }

int main(int argc, char* argv[]) {
    int x = std::stoi(argv[1]);
    int y = std::stoi(argv[2]);
    int d = std::stoi(argv[3]);

int result = saltos(x, y, d);
    std::cout << "Cantidad de saltos: " << result << std::endl;

    return 0;
}