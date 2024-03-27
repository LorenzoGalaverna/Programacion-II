// Crear un programa que permita cargar una cadena de caracteres en un arreglo.
// Utilizando un puntero al arreglo, recorrer el mismo hacia adelante y hacia atrás utilizando los
// operadores ++ y -- sobre el puntero.

#include <iostream>
using namespace std;

int main() {
    const int TAMANIO_MAXIMO = 100;
    char arreglo[TAMANIO_MAXIMO];
    
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(arreglo, TAMANIO_MAXIMO);
    
    cout << "Cadena ingresada: " << arreglo << endl;
    
    cout << "Recorrido hacia adelante:" << endl;
    char *p = arreglo;
    
    while (*p != '\0') {
        cout << *p;
        ++p; 
    }
    cout << endl;
    
    cout << "Recorrido hacia atrás:" << endl;
    p--;
    while (p >= arreglo) {
        cout << *p; 
        p--; 
    }
    cout << endl;
    
    return 0;
}
