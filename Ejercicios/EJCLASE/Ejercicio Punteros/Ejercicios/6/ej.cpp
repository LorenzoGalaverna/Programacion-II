#include <iostream>
// Crear un programa que defina dos punteros a tipos de datos int y float. Acceder mediante estos
// punteros a otras variables de tipo int y float.

int main() {
    // Definición de variables int y float
    int x = 10;
    float y = 3.14;

    // Definición de punteros a int y float
    int *p_int;
    float *p_float;

    // Asignación de direcciones de memoria de las variables a los punteros
    p_int = &x;
    p_float = &y;

    // Acceso a las variables a través de los punteros
    std::cout << "El valor de x accedido a traves de puntero int es: " << *p_int << std::endl;
    std::cout << "El valor de y accedido a traves de puntero float es: " << *p_float << std::endl;

    return 0;
}

// Se define una variable x de tipo int y se inicializa con el valor 10.

// Se define una variable y de tipo float y se inicializa con el valor 3.14.

// Se definen dos punteros: p_int de tipo int* y p_float de tipo float*.

// Se asignan las direcciones de memoria de x e y a los punteros p_int y p_float, respectivamente.

// p_int: Apunta a la dirección de memoria de x
// p_float: Apunta a la dirección de memoria de y
// Se accede a las variables x e y a través de los punteros p_int y p_float respectivamente, imprimiendo sus valores.

// Imprime el valor de x a través de p_int: "El valor de x accedido a través de puntero int es: 10"
// Imprime el valor de y a través de p_float: "El valor de y accedido a través de puntero float es: 3.14"
