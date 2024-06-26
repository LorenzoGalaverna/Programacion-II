#include <iostream>
#include "libreria.h"

int sumaElementosAdyacentes(const std::vector<std::vector<int>>& matriz, int i, int j) {
    int suma = 0;
    int filas = matriz.size();
    int columnas = matriz[0].size();

    if (i >= 0 && i < filas && j >= 0 && j < columnas) {
        std::vector<std::pair<int, int>> adyacentes = {{i-1, j}, {i+1, j}, {i, j-1}, {i, j+1}};

        for (const auto& par : adyacentes) {
            int fila = par.first;
            int columna = par.second;
            if (fila >= 0 && fila < filas && columna >= 0 && columna < columnas) {
                suma += matriz[fila][columna];
            }
        }
    }

    return suma;
}