#include <iostream>
// Crear una secuencia de instrucciones que ermita crear un puntero p y asignar un valor a través del
// mismo a la variable z.

int main() {
    // Declaración de la variable z
    int z;
    // Declaración del puntero p
    int *p;
    
    // Asignación de la dirección de memoria de z al puntero p
    p = &z;
    // Asignación de un valor (por ejemplo, 42) a la variable z a través del puntero p
    *p = 42;
    
    // Imprimir el valor de z para verificar que se asignó correctamente
    std::cout << "El valor de z es: " << z << std::endl;
    
    return 0;
}