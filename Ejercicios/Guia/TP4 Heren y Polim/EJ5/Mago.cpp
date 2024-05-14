#include "Mago.h"
#include <iostream>

Mago::Mago(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos)
    : Personaje(nombre, raza, fuerza, inteligencia, puntosVidaMaximos) {}

void Mago::aprendeHechizo(string hechizo) {
    if (hechizos.size() < 4) {
        hechizos.push_back(hechizo);
    }
}

void Mago::lanzaHechizo(Personaje &objetivo) {
    if (!hechizos.empty()) {
        int vidaActual = objetivo.getPuntosVidaActuales(); // Obtenemos los puntos de vida actuales usando el getter
        vidaActual -= 10; // Reducimos los puntos de vida

        // Verificamos que los puntos de vida no sean negativos
        if (vidaActual < 0) {
            vidaActual = 0;
        }

        objetivo.setPuntosVidaActuales(vidaActual); // Actualizamos los puntos de vida usando el setter
        hechizos.pop_back();
    }
}


void Mago::imprime() {
    Personaje::visualizaDatos();
    cout << "Hechizos memorizados:" << endl;
    for (const auto &hechizo : hechizos) {
        cout << "- " << hechizo << endl;
    }
}
