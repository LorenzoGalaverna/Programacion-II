#include <iostream>
// ¿Se puede imprimir el contenido de un puntero?

int main() {
    int x = 42;
    int *p = &x; // Puntero que apunta a la dirección de memoria de x
    
    // Imprimir el contenido del puntero (el valor almacenado en la dirección de memoria a la que apunta)
    std::cout << "Contenido del puntero p: " << *p << std::endl;

    return 0;
}