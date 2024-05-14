#ifndef CLERIGO_H
#define CLERIGO_H

#include "Personaje.h"

class Clerigo : public Personaje {
private:
    string nombreDios;

public:
    Clerigo(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos, string nombreDios);
    void curar(Personaje &objetivo);
    void imprime() override;
};
#endif