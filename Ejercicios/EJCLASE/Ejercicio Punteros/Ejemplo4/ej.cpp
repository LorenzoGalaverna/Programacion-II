#include <iostream>

int main() {
    // Declaración de variables
    int x, y, *p, *q;
    
    // Asignación de la dirección de memoria de x al puntero p
    p = &x;
    // Asignación del valor 14 a la dirección de memoria apuntada por p (x)
    *p = 14;
    // Asignación de la dirección de memoria apuntada por p (x) al puntero q
    q = p;

    // Si p es igual a q, imprime "Mensaje 1"
    if (p == q)
        std::cout << "Mensaje 1";

    // Asignación de la dirección de memoria de y al puntero q
    q = &y;

    // Si p es igual a q, no se cumple la condición, entonces no imprime nada
    // Ya que anteriormente se había cambiado la dirección de q
    if (p == q)
        std::cout << "Mensaje 2";

    // Asignación del valor 14 a la dirección de memoria apuntada por q (y)
    *q = 14;

    // Si p es igual a q, imprime "Mensaje 3"
    if (p == q)
        std::cout << "Mensaje 3";

    // Si el valor apuntado por p es igual al valor apuntado por q, imprime "Mensaje 4"
    if (*p == *q)
        std::cout << "Mensaje 4";

    return 0;
}