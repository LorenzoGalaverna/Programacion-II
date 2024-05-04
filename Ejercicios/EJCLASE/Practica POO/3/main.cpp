/*
Vamos a realizar una clase llamada Raices, donde representaremos los valores de una
ecuación de 2º grado.
Tendremos los 3 coeficientes como atributos, llamémosles a, b y c.
Hay que insertar estos 3 valores para construir el objeto.
Las operaciones que se podrán hacer son las siguientes:
● obtenerRaices(): imprime las 2 posibles soluciones
● obtenerRaiz(): imprime única raíz, que será cuando solo tenga una solución posible.
● getDiscriminante(): devuelve el valor del discriminante (double), el discriminante
tiene la siguiente formula, (b^2)-4*a*c
● tieneRaices(): devuelve un booleano indicando si tiene dos soluciones, para que
esto ocurra, el discriminante debe ser mayor o igual que 0.
● tieneRaiz(): devuelve un booleano indicando si tiene una única solución, para que
esto ocurra, el discriminante debe ser igual que 0.
● calcular(): mostrara por consola las posibles soluciones que tiene nuestra ecuación,
en caso de no existir solución, mostrarlo también.
Formula ecuación 2º grado: (-b±√((b^2)-(4*a*c)))/(2*a)
Solo varia el signo delante de -b
*/
#include <iostream>
#include "Raices.h"

int main() {
    int a,b,c;

    std::cout << "Ingrese a ";
    std::cin >> a;

    std::cout << "Ingrese b ";
    std::cin >> b;

    std::cout << "Ingrese c ";
    std::cin >> c;

    Raices ecuacion(a,b,c);
    // Mostrar información y resultados
    std::cout << "Discriminante: " << ecuacion.getDiscriminante() << std::endl;
    std::cout << "Tiene Raices: " << ecuacion.TieneRaices() << std::endl;
    std::cout << "Tiene Raiz: " << ecuacion.tieneRaiz() << std::endl;
    std::cout << "Raiz: " << ecuacion.obtenerRaiz() << std::endl;
    auto raices = ecuacion.obtenerRaices();
    std::cout << "Raiz 1: " << raices.first << std::endl;
    std::cout << "Raiz 2: " << raices.second << std::endl;


    return 0;
}
