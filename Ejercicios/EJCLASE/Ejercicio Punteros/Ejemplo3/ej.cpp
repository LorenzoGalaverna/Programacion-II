#include <iostream>

int main() {
    // Declaración de variables
    int x, y, *p, *q;
    
    // Asignación de la dirección de memoria de x al puntero p
    p = &x;
    // Asignación del valor 12 a la dirección de memoria apuntada por p (x)
    *p = 12;
    // Asignación de la dirección de memoria de y al puntero q
    q = &y;
    // Asignación del valor 23 a la dirección de memoria apuntada por q (y)
    *q = 23;
    
    // Imprime el valor apuntado por p (x) y por q (y)
    std::cout << *p <<" "<<*q<<std::endl;
    
    // Asigna el valor apuntado por q (y) al valor apuntado por p (x)
    *p = *q;
    
    // Imprime el valor apuntado por p (x) y por q (y), ambos serán 23
    std::cout << *p <<" "<<*q<<std::endl;
    
    // Asigna NULL a q, lo que hace que ya no apunte a ninguna dirección de memoria válida
    q = NULL;
    
    // Imprime el valor apuntado por p (x), que sigue siendo 23
    std::cout<<*p<<std::endl;
    
    // Imprime el valor de x y el valor de y, x seguirá siendo 23, pero y no ha sido inicializado y contiene un valor indeterminado
    std::cout<<x<<" "<<y<<std::endl;
    
    return 0;
}