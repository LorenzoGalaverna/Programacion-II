#include <iostream>
#include "libreria.h"
#include <string>

int main(int argc, char* argv[]) {
    int a = std::stoi(argv[1]);
    int b = std::stoi(argv[2]);
    int k = std::stoi(argv[3]);

int result = divisiblespor(a, b, k);
    std::cout << "Divisible por: " << result << " numeros" << std::endl;

    return 0;
}