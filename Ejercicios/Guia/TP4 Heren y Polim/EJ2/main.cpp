/*
Obtener un programa para gestionar los empleados de un comercio.
Los empleados se definen por:
 Nombre
 Edad
 Salario
Existen dos tipos de empleados: repartidor y comercial.
El comercial, aparte de los atributos anteriores, tiene uno más llamado comisión
(número real).
El repartidor, aparte de los atributos de empleado, tiene otro llamado zona
(número entero).
Se debe generar un mecanismo de Herencia con Empleado (clase padre
abstracta) y Comercial y Repartidor (clases hijas).
Crear los constructores, métodos para cargar y visualizar atributos y un método
llamado toString para mostrar la información completa del individuo.
Definir también un método llamado plus, que aumenta el salario del empleado en
3000$ según las siguientes condiciones:
 En comercial, si tiene más de 30 años y cobra una comisión de más del 12%
se le aplicara el plus.
 En repartidor, si tiene menos de 25 años y reparte en la zona 3
Realizar un programa principal que haga uso de las clases.
*/
#include <iostream>
#include "comercial.h"
#include "repartidor.h"

int main() {
    Comercial comercial1("Juan", 35, 2000, 15);
    Repartidor repartidor1("Pedro", 22, 1500, 3);

    std::cout << "Información del comercial:" << std::endl;
    comercial1.mostrarInformacion();
    std::cout << "Plus: $" << comercial1.plus() << std::endl;

    std::cout << "\nInformación del repartidor:" << std::endl;
    repartidor1.mostrarInformacion();
    std::cout << "Plus: $" << repartidor1.plus() << std::endl;

    return 0;
}
