#include <iostream>
#include "libreria.h"

void intercambiar(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}
