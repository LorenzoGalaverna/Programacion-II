#include <iostream>
#include "libreria.h"

int main() {
    int X = 5;
    int Y = 7;

    std::cout << "Antes de intercambiar: X = " << X << ", Y = " << Y << std::endl;

    intercambiar(X, Y);

    std::cout << "Despues de intercambiar: X = " << X << ", Y = " << Y << std::endl;

    return 0;
}
