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
