#include <iostream>
#include "libreria.h"
#include <algorithm>

void ordenarVector(std::vector<int>& vec) {
    std::sort(vec.begin(), vec.end(), std::greater<int>());
}