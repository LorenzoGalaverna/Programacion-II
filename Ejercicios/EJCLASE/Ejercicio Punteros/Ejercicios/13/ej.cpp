// Crear un programa que cargue los elementos de un vector y recorra el mismo utilizando un
// puntero y el operador ++

#include <iostream>
using namespace std;

int main()
{
    const int TAMANIO_MAXIMO = 100;
    int vector[TAMANIO_MAXIMO];
    int tamanio;

    cout << "Ingrese el tamaño del vector: ";
    cin >> tamanio;

    if (tamanio > TAMANIO_MAXIMO)
    {
        cout << "Error: El tamaño del vector excede el tamaño máximo permitido." << endl;
        return 1;
    }

    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < tamanio; ++i)
    {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    cout << "Recorrido del vector:" << endl;
    int *p = vector;

    while (p < vector + tamanio)
    {
        cout << *p << " ";
        ++p;
    }
    cout << endl;

    return 0;
}
