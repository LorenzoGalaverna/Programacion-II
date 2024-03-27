// Se tiene el siguiente segmento de código:
#include<iostream> // Incluye la biblioteca de E/S estándar
using namespace std; // Usa el espacio de nombres estándar

int main() // Función principal
{
    int x1 = 50; // Declara e inicializa la variable x1 con el valor 50
    int x2 = 100; // Declara e inicializa la variable x2 con el valor 100
    int *pun1, *pun2; // Declara dos punteros a enteros pun1 y pun2

    pun1 = &x1; // pun1 apunta a la dirección de memoria de x1
    pun2 = pun1; // pun2 apunta a la misma dirección de memoria que pun1 (a x1)
    *pun1 = 2000; // Modifica el valor de la variable apuntada por pun1 (x1) a 2000

    pun2 = &x2; // pun2 ahora apunta a la dirección de memoria de x2
    x1 = 1; // Asigna el valor 1 a la variable x1
    x2 = 2; // Asigna el valor 2 a la variable x2

    *pun1 = 500; // Modifica el valor de la variable apuntada por pun1 (x1) a 500
    *pun2 = 600; // Modifica el valor de la variable apuntada por pun2 (x2) a 600

    return 0; // Devuelve 0 para indicar que el programa se ejecutó correctamente
}
// Realizar el seguimiento.