#include <iostream>
#include "libreria.h"
#include <string>

int main(int argc, char* argv[]) {
    int M = std::stoi(argv[1]);
    int N = std::stoi(argv[2]);

int result = mcd(M, N);
    std::cout << "El Maximo Comun Divisor de " << M << " y " << N << " es: " << result << std::endl;


    return 0;
}