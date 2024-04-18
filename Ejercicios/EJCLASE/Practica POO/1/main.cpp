#include "cuenta.h"
#include <iostream>
using namespace std;

int main() {
    Cuenta cuenta1("Juan Perez");
    Cuenta cuenta2("Maria Lopez", 500.0);

    cout << "Fondos iniciales:" << endl;
    cout << "Titular de la cuenta 1: " << cuenta1.getTitular() << ", Cantidad: $" << cuenta1.getCantidad() << endl;
    cout << "Titular de la cuenta 2: " << cuenta2.getTitular() << ", Cantidad: $" << cuenta2.getCantidad() << endl;

    cuenta1.ingresar(200.0);
    cuenta2.retirar(100.0);

    cout << "Después de operaciones 1:" << endl;
    cout << "Titular de la cuenta 1: " << cuenta1.getTitular() << ", Cantidad: $" << cuenta1.getCantidad() << endl;
    cout << "Titular de la cuenta 2: " << cuenta2.getTitular() << ", Cantidad: $" << cuenta2.getCantidad() << endl;

    cuenta1.retirar(300.0);
    cuenta2.ingresar(100.0);

    cout << "Después de operaciones 2:" << endl;
    cout << "Titular de la cuenta 1: " << cuenta1.getTitular() << ", Cantidad: $" << cuenta1.getCantidad() << endl;
    cout << "Titular de la cuenta 2: " << cuenta2.getTitular() << ", Cantidad: $" << cuenta2.getCantidad() << endl;

    return 0;
}
