#include <iostream>
// Suponemos el siguiente segmento de código de un programa.
int main() {
 int a = 501; // Se declara la variable a de tipo entero y se le asigna el valor 501.
  int *p;
  p = &a;
 *p = 5;

return 0;
}

// a: 501
// Dirección de memoria de a: 1000
// p: No definido aún
// int *p;: Se declara un puntero p a un entero.

// a: 501
// Dirección de memoria de a: 1000
// p: No apunta a ninguna dirección de memoria aún
// p = &a;: Se asigna la dirección de memoria de a al puntero p.

// a: 501
// Dirección de memoria de a: 1000
// p: Apunta a la dirección de memoria 1000 (la dirección de a)
// *p = 5;: Se asigna el valor 5 a través del puntero p, es decir, se modifica el valor almacenado en la dirección de memoria apuntada por p.

// a: 5
// Dirección de memoria de a: 1000
// p: Apunta a la dirección de memoria 1000 (la dirección de a)
// Al finalizar la ejecución del programa, el valor de a se ha modificado de 501 a 5 mediante el uso del puntero p.