#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>
using namespace std;

class Personaje {
private:
    string nombre;
    string raza;
    int fuerza;
    int inteligencia;
    int puntosVidaMaximos;
    int puntosVidaActuales;

public:
    Personaje(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos);
    void cargaDatos(int puntosVidaActuales);
    void visualizaDatos();
    virtual void imprime();

    // Getters para acceder a los atributos privados
    string getNombre() const { return nombre; }
    string getRaza() const { return raza; }
    int getFuerza() const { return fuerza; }
    int getInteligencia() const { return inteligencia; }
    int getPuntosVidaMaximos() const { return puntosVidaMaximos; }
    int getPuntosVidaActuales() const { return puntosVidaActuales; }

    // Setters para actualizar los atributos privados
    void setNombre(string nombre) { this->nombre = nombre; }
    void setRaza(string raza) { this->raza = raza; }
    void setFuerza(int fuerza) { this->fuerza = fuerza; }
    void setInteligencia(int inteligencia) { this->inteligencia = inteligencia; }
    void setPuntosVidaMaximos(int puntosVidaMaximos) { this->puntosVidaMaximos = puntosVidaMaximos; }
    void setPuntosVidaActuales(int puntosVidaActuales) { this->puntosVidaActuales = puntosVidaActuales; }
};

#endif
