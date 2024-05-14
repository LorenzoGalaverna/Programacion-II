#include "Personaje.h"
#include "Mago.h"
#include "Clerigo.h"
#include <iostream>

int main() {
    Mago magoA("Gandalf", "Humano", 10, 18, 80);
    Mago magoB("Merlin", "Elfo", 15, 17, 90);
    Clerigo clerigoC("Grom", "Orco", 20, 12, 100, "Gork");

    magoA.cargaDatos(80);
    magoB.cargaDatos(90);
    clerigoC.cargaDatos(100);

    cout << "Datos de los personajes:" << endl;
    magoA.imprime();
    magoB.imprime();
    clerigoC.imprime();
    cout << endl;

    magoA.aprendeHechizo("Bola de Fuego");
    magoA.aprendeHechizo("Rayo");
    magoB.aprendeHechizo("Escudo");

    cout << "Datos de los magos despues de aprender hechizos:" << endl;
    magoA.imprime();
    magoB.imprime();
    cout << endl;

    cout << "Mago A lanza un hechizo sobre el Mago B:" << endl;
    magoA.lanzaHechizo(magoB);
    cout << "Mago B lanza un hechizo sobre el Mago A:" << endl;
    magoB.lanzaHechizo(magoA);
    cout << "El Clerigo C cura al Mago B:" << endl;
    clerigoC.curar(magoB);
    cout << "Mago A lanza un hechizo sobre el Mago B:" << endl;
    magoA.lanzaHechizo(magoB);
    cout << endl;

    cout << "Datos de los personajes despues de las acciones:" << endl;
    magoA.imprime();
    magoB.imprime();
    clerigoC.imprime();

    return 0;
}
