#include "libreria.h"
#include <iostream>

int divisiblespor(int a, int b, int k){
    int count = 0;
    for (int i = a; i <= b; ++i) {
        if (i % k == 0) {
            count++;
        }
    }
    return count;
};
