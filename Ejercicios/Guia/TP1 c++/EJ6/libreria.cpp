#include <iostream>
#include "libreria.h"

bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

bool esSemiPrimo(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0 && esPrimo(i) && esPrimo(num / i)) {
            return true;
        }
    }
    return false;
}