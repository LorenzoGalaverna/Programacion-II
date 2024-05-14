#include "Personaje.h"
#include <iostream>

Personaje::Personaje(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos) {
    this->nombre = nombre;
    this->raza = raza;
    this->fuerza = fuerza;
    this->inteligencia = inteligencia;
    this->puntosVidaMaximos = puntosVidaMaximos;
}

void Personaje::cargaDatos(int puntosVidaActuales) {
    this->puntosVidaActuales = puntosVidaActuales;
}

void Personaje::visualizaDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Raza: " << raza << endl;
    cout << "Fuerza: " << fuerza << endl;
    cout << "Inteligencia: " << inteligencia << endl;
    cout << "Puntos de Vida Maximos: " << puntosVidaMaximos << endl;
    cout << "Puntos de Vida Actuales: " << puntosVidaActuales << endl;
}

void Personaje::imprime() {
    visualizaDatos();
}
