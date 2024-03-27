#include <iostream>
using namespace std;
//Definir tres variables enteras e inicializarlas con los valores 5,10 y 15. Luego definir una variable
// puntero a entero. Hacer que dicha variable apunte sucesivamente a las distintas variables definidas
// previamente e imprimir su contenido.
int main() {
    int a = 5, b = 10, c = 15;
    
    int *p;

    p = &a;
    cout << "Contenido del puntero: " << *p << endl;

    p = &b;
    cout << "Contenido del puntero: " << *p << endl;

    p = &c;
    cout << "Contenido del puntero: " << *p << endl;

    return 0;
}