#include "Clerigo.h"
#include <iostream>

Clerigo::Clerigo(string nombre, string raza, int fuerza, int inteligencia, int puntosVidaMaximos, string nombreDios)
    : Personaje(nombre, raza, fuerza, inteligencia, puntosVidaMaximos), nombreDios(nombreDios) {}

void Clerigo::curar(Personaje &objetivo) {
    // Usamos el getter para obtener puntosVidaActuales
    int vidaActual = objetivo.getPuntosVidaActuales();

    vidaActual += 10;
    
    // Comprobamos que la vida actual no supere los puntos de vida máximos
    if (vidaActual > objetivo.getPuntosVidaMaximos()) {
        vidaActual = objetivo.getPuntosVidaMaximos();
    }
    
    // Utilizamos el setter para actualizar puntosVidaActuales
    objetivo.cargaDatos(vidaActual);
}

void Clerigo::imprime() {
    Personaje::visualizaDatos();
    std::cout << "Nombre del Dios: " << nombreDios << std::endl;
}
