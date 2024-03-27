// Definir dos variables float y un puntero a un tipo de dato float. Hacer que el puntero guarde
// sucesivamente las direcciones de la primera y segunda variable y cambiar el contenido de las
// mismas por asignación. Imprimir las dos variables de tipo float.
#include <iostream>
using namespace std;

int main() {
    float float1 = 3.14;
    float float2 = 2.718;
    float *p;

    p = &float1;
    *p = 4.56;

    p = &float2;
    *p = 7.89;

    cout << "float1: " << float1 << endl;
    cout << "float2: " << float2 << endl;

    return 0;
}
