#include <iostream>
#include "libreria.h"
#include <string>

int main(int argc, char* argv[]) {
    int N = std::stoi(argv[1]);

int result = factorial(N);
    std::cout << "El Factorial de " << N << " es: " << result << std::endl;
    return 0;
}