// Crear un programa que contenga dos funciones creadas por el programador.
// La f1 incrementa el valor de una variable enviada como parámetro y retorna el resultado por el
// nombre de la función.
// La f2 incrementa el valor del una variable enviada como parámetro y retorna el resultado por el
// mismo parámetro. 
#include <iostream>
using namespace std;

int f1(int value) {
    return value + 1;
}

void f2(int &value) {
    value++;
}

int main() {
    int num = 5;

    cout << "Resultado de f1: " << f1(num) << endl;

    f2(num);
    cout << "Valor de num después de llamar a f2: " << num << endl;

    return 0;
}
