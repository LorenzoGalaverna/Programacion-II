#include <iostream>

int main() {
    // Declaración de variables
    int *p, *q, x, y;
    
    // Asignación de la dirección de memoria de x al puntero p
    p = &x;
    // Asignación del valor 14 a la dirección de memoria apuntada por p
    *p = 14;
    // Asignación del valor de p a q
    q = p;
    
    // Imprime el valor apuntado por p y por q, ambos son 14
    std::cout << *p << " " << *q << std::endl;
    
    // Asigna NULL a q, lo que hace que ya no apunte a ninguna dirección de memoria válida
    q = NULL;
    
    // Imprime el valor de x y el valor de y, x sigue siendo 14, pero y no ha sido inicializado y contiene un valor indeterminado
    std::cout << x << " " << y << std::endl;
    
    return 0;
}