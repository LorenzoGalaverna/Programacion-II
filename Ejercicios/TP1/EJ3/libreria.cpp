#include "libreria.h"
#include <iostream>

int mcd(int M, int N) {
    if (N == 0) {
        return M;
    } else {
        return mcd(N, M % N);
    }
}
