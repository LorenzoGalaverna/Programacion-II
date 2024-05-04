/*
Haz una clase llamada Persona que siga las siguientes especificaciones:
● Atributos:
nombre, edad, DNI, sexo (H hombre, M mujer), peso y altura.
No deben ser accedidos directamente.
● Por defecto, todos los atributos menos el DNI serán valores por defecto según su
tipo (0 números, cadena vacía para String, etc.). Sexo sera hombre por defecto.
● Se implementan los constructores:
○ Un constructor por defecto.
○ Un constructor con el nombre, edad y sexo, el resto por defecto.
○ Un constructor con todos los atributos como parámetro.
● Implementar los siguientes métodos:
○ calcularIMC(): calculara si la persona esta en su peso ideal (peso en
kg/(altura^2 en m)),
Si el cálculo devuelve:
Un valor menor que 20, la función devuelve un -1,
Si el valor está entre 20 y 25 (incluidos), significa que la persona está
por debajo de su peso ideal. La función devuelve un 0
Si devuelve un valor mayor que 25 significa que tiene sobrepeso, la
función devuelve un 1.
■ esMayorDeEdad(): indica si es mayor de edad, devuelve un booleano.
■ comprobarSexo(char sexo): comprueba que el sexo introducido es
correcto. Si no es correcto, sera H. No debe ser visible al exterior.
■ generaDNI(): genera un número aleatorio de 8 cifras, genera a partir
de este su número su letra correspondiente. Este método sera
invocado cuando se construya el objeto. Puedes dividir el método
para que te sea más fácil. No será visible al exterior.
■ Métodos set de cada parámetro, excepto de DNI.
Programa:
● Ingresar por teclado el nombre, la edad, sexo, peso y altura.
● Crear 3 objetos de la clase anterior
● Para cada objeto, deberá comprobar si esta en su peso ideal, tiene sobrepeso o por
debajo de su peso ideal con un mensaje.
● Indicar para cada objeto si es mayor de edad.
● Por último, mostrar la información de cada objeto.
*/
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