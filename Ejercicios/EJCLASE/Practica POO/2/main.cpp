#include <iostream>
#include "persona.h"
using namespace std;

int main()
{
    string nombre;
    char sexo;
    int edad;
    float peso, altura;
    
    Persona persona1;

    Persona persona2("Juanceto", 25, 'H');

    cout << "Ingrese el nombre de la persona 3: ";
    cin >> nombre;
    cout << "Ingrese la edad de la persona 3: ";
    cin >> edad;
    cout << "Ingrese el sexo de la persona 3: ";
    cin >> sexo;
    cout << "Ingrese el peso de la persona 3: ";
    cin >> peso;
    cout << "Ingrese la altura de la persona 3: ";
    cin >> altura;

    Persona persona3(nombre, edad, sexo, peso, altura);

    mostrarInformacionPersona(persona1);
    persona1.esMayorDeEdad() ? cout << "Es mayor de edad" : cout << "No es mayor de edad"<< endl;
    mostrarInformacionPersona(persona2);
    persona2.esMayorDeEdad() ? cout << "Es mayor de edad" : cout << "No es mayor de edad"<< endl;
    mostrarInformacionPersona(persona3);
    persona3.esMayorDeEdad() ? cout << "Es mayor de edad" : cout << "No es mayor de edad"<< endl;

    return 0;
}