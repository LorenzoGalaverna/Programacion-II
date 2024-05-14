/*
Generar un mecanismo de herencia para gestionar una serie de productos.
Los productos tienen los siguientes atributos:
 Nombre
 Precio
Hay dos tipos de productos:
 Perecedero: tiene un atributo llamado días a caducar
 No perecedero: tiene un atributo llamado tipo
Definir los constructores necesarios y los métodos de carga y visualización de los
atributos
Definir el método calcularMonto con un parámetro entero que corresponde a la
cantidad de productos:
 En Producto, se calcula como el precio por la cantidad.
 En Perecedero, además de lo anterior, el precio se reducirá según los días a
caducar:
o Si le queda 1 día para caducar, se reducirá 4 veces el precio final.
o Si le quedan 2 días para caducar, se reducirá 3 veces el precio final.
o Si le quedan 3 días para caducar, se reducirá a la mitad de su precio
final.
 En NoPerecedero, el cálculo es igual que en Producto
Realizar un programa principal que haga uso de las clases.
*/
#include <iostream>
#include "Producto.h"
#include "Perecedero.h"
#include "NoPerecedero.h"

int main() {
    // Ejemplo de uso
    Producto producto1("Manzanas", 2.5);
    Perecedero producto2("Leche", 3.0, 2);
    NoPerecedero producto3("Arroz", 1.5, "Granos");

    cout << "Nombre: " << producto1.getNombre() << endl;
    cout << "Precio: $" << producto1.getPrecio() << endl;
    cout << "Monto a pagar: $" << producto1.calcularMonto(5) << endl;

    cout << "Nombre: " << producto2.getNombre() << endl;
    cout << "Precio: $" << producto2.getPrecio() << endl;
    cout << "Monto a pagar: $" << producto2.calcularMonto(2) << endl;

    cout << "Nombre: " << producto3.getNombre() << endl;
    cout << "Precio: $" << producto3.getPrecio() << endl;
    cout << "Monto a pagar: $" << producto3.calcularMonto(3) << endl;

    return 0;
}
