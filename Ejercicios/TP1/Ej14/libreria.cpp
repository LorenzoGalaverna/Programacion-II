#include <iostream>
#include "libreria.h"

bool existeTripleteTriangular(const std::vector<int>& A) {
    int N = A.size();

    if (N < 3) {
        return false;
    }

    for (int P = 0; P < N - 2; ++P) {
        for (int Q = P + 1; Q < N - 1; ++Q) {
            for (int R = Q + 1; R < N; ++R) {
                if (A[P] + A[Q] > A[R] && A[Q] + A[R] > A[P] && A[R] + A[P] > A[Q]) {
                    return true;
                }
            }
        }
    }

    return false;
}