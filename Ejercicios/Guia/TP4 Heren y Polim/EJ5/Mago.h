#ifndef MAGO_H
#define MAGO_H

#include "Personaje.h"
#include <vector>

class Mago : public Personaje {
private:
    vector<string> hechizos;

public:
    Mago(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos);
    void aprendeHechizo(string hechizo);
    void lanzaHechizo(Personaje &objetivo);
    void imprime() override;
};

#endif
