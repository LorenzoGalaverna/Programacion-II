#include "persona.h"
#include <iostream>

int main() {
    // Crear una persona
    Persona persona1;
    
    // Cargar datos
    persona1.cargarDatos();
    
    // Mostrar datos
    persona1.mostrarDatos();

    // Calcular y mostrar el IMC
    double imc = persona1.calcularIMC();
    std::cout << "IMC: " << imc << std::endl;

    // Calcular y mostrar la edad
    int edad = persona1.calcularEdad();
    std::cout << "Edad: " << edad << " años" << std::endl;

    // Verificar si es mayor de edad
    bool mayorDeEdad = persona1.esMayorDeEdad();
    if (mayorDeEdad) {
        std::cout << "Es mayor de edad" << std::endl;
    } else {
        std::cout << "Es menor de edad" << std::endl;
    }

    return 0;
}
