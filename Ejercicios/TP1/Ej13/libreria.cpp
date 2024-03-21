#include <iostream>
#include "libreria.h"

bool buscarNumero(const std::vector<int>& arreglo, int numero, int& ubicacion) {
    for (size_t i = 0; i < arreglo.size(); ++i) {
        if (arreglo[i] == numero) {
            ubicacion = i;
            return true;
        }
    }
    return false;
}
