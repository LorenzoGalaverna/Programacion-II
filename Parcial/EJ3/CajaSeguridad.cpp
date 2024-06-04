#include "cajaseguridad.h"

CajaSeguridad::CajaSeguridad() : codigo(0) {}

void CajaSeguridad::setCodigo(int codigo) {
    this->codigo = codigo;
}

int CajaSeguridad::getCodigo() {
    return codigo;
}
