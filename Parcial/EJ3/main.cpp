#include <iostream>
#include "Sucursal.h"
#include "Cajaseguridad.h"

int main() {
    CajaSeguridad* caja = new CajaSeguridad();

    Sucursal sucursal("Sucursal A", 123, "Messi");
    sucursal.setCajaSeguridad(caja);

    sucursal.cargarDatosCajaSeguridad(1234);

    cout << "Sucursal: " << sucursal.getNombre() << endl;
    cout << "Numero: " << sucursal.getNumero() << endl;
    cout << "Responsable: " << sucursal.getResponsable() << endl;
    cout << "Codigo de Caja de Seguridad: " << sucursal.getCodigoCajaSeguridad() << endl;

    delete caja;

    return 0;
}
