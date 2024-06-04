#ifndef SUCURSAL_H
#define SUCURSAL_H

#include "banco.h"
#include "cajaSeguridad.h"
#include <string>
using namespace std;

class Sucursal : public Banco
{
private:
    int numero;
    string responsable;
    CajaSeguridad *cajaSeguridad;
public:
    Sucursal(string nombre, int numero, string responsable);
    int getNumero();
    string getResponsable();
    void setCajaSeguridad(CajaSeguridad *caja);
    void cargarDatosCajaSeguridad(int codigo);
    int getCodigoCajaSeguridad();
};

#endif
