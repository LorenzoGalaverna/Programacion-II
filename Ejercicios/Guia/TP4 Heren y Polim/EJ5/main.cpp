*/
Para un juego de rol, es necesario definir el esquema de personajes según lo
siguiente:
 Hay 2 tipos de personajes, los Magos y los Clérigos.
 Todos los personajes cuentan con los siguientes datos:
 Nombre: una cadena.
 Raza: una cadena que puede tomar los valores “humano”, “elfo”, “enano” u
“orco”.
 13
GUÍA DE TRABAJOS PRÁCTICOS
PROGRAMACIÓN II
 Fuerza: un entero entre 0 y 20
 Inteligencia: un entero entre 0 y 20
 Puntos de vida máximos: un entero entre 0 y 100
 Puntos de vida actuales: un entero entre 0 y puntos de vida máximos
Además cada tipo de personaje tiene atributos y restricciones específicos que se
Detallaran más adelante.
Se pide:
 Generar una clase Personaje que reúna los atributos mencionados
anteriormente. Dicha clase debe incluir:
o Un constructor para poder inicializar los atributos (se supone que los
puntos de vida actuales son iguales a los máximos al inicializarse)
o Métodos de carga y visualización para todos los atributos de la clase
o Método imprime que muestre por pantalla los datos del personaje
 Generar la clase Mago teniendo en cuenta las siguientes restricciones:
o Al crearse, un mago no puede tener en inteligencia un valor menor
que 17 ni en fuerza un valor mayor que 15.
o Además un mago almacena los nombres de los hechizos que ha
memorizado y sólo puede memorizar a la vez un máximo de 4
hechizos.
o Generar los siguientes métodos:
 AprendeHechizo: que tiene un parámetro de tipo cadena y
añade un hechizo a los memorizados.
 LanzaHechizo: que tiene como parámetro un objeto de tipo
Personaje. Este será el personaje sobre el que recae el
hechizo. Al lanzar el hechizo, el Personaje que lo recibe pierde
10 de los puntos de vida y el Mago lo olvida.
 Generar el constructor de la clase sabiendo que en el
momento de su creación, el Mago no conoce ningún hechizo.
 Adecuar el método imprime para que se muestren además de
los datos del personaje la lista de hechizos.
 Generar la clase Clérigo teniendo en cuenta las siguientes restricciones:
o Al crearse, un clérigo no puede tener una fuerza con un valor menor
que 18 y una inteligencia con un valor menor que 12 ni mayor que 16
ambos incluidos
o El clérigo reza a un dios para obtener el don de la curación. Por lo
tanto el constructor debe aceptar el nombre del dios del cual el clérigo
es devoto y almacenarlo.
o Un clérigo tiene el don de curar.
o Generar los siguientes métodos:
 Curar que recibe como parámetro un objeto de tipo Personaje
sobre el que recae la cura. La vida de ese personaje aumenta
en 10 puntos.
 Adecuar el método imprime para que se muestren además de
los datos del personaje se muestre el nombre del Dios.
 Generar un programa de prueba en el que se creen 2 magos (A y B) y un
clérigo (C) y el que tengan que realizar las siguientes acciones:
 Imprimir los datos de los tres personajes
 El mago A aprende 2 hechizos.
 El mago B aprende 1 hechizo.
 Imprimir los datos de los magos
 El mago A lanza un hechizo sobre el mago B
 14
GUÍA DE TRABAJOS PRÁCTICOS
PROGRAMACIÓN II
 El mago B lanza un hechizo sobre el mago A
 El clérigo cura al mago B
 El mago A lanza un hechizo sobre el mago B
 Imprimir los datos de los tres personajes
/*

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
