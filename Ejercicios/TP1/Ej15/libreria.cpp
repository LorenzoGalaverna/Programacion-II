#include <iostream>
#include "libreria.h"

void invertirVector(std::vector<int>& vec) {
    int inicio = 0;
    int fin = vec.size() - 1;

    while (inicio < fin) {
        int temp = vec[inicio];
        vec[inicio] = vec[fin];
        vec[fin] = temp;
        inicio++;
        fin--;
    }
}