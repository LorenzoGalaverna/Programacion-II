#include "libreria.h"
#include <cmath>
#include <iostream>

// int calcularSaltos(int X, int Y, int D) {
//     int distancia = Y - X;
//     int saltos = std::ceil(static_cast<double>(distancia) / D);
//     return saltos;
// }

int saltos(int x, int y, int d){
    int i = 0;
    while (y >x){
        x = x+d;
        i++;
    } 

    return i;
};
