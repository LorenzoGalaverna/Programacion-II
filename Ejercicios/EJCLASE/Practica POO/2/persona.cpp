#include "Persona.h"
#include <iostream>
using namespace std;
#include <cmath>

Persona::Persona()
{
    this->nombre = ' ';
    this->edad = 0;
    this->dni = generaDNI();
    this->sexo = 'H';
    this->peso = 0;
    this->altura = 0;
}

Persona::Persona(string nombre, int edad, char sexo)
{
    this->nombre = nombre;
    this->edad = edad;
    this->dni = generaDNI();
    this->sexo = comprobarSexo(sexo);
    this->peso = 0;
    this->altura = 0;
}

Persona::Persona(string nombre, int edad, char sexo, float peso, float altura)
{
    this->nombre = nombre;
    this->edad = edad;
    this->dni = generaDNI();
    this->sexo = comprobarSexo(sexo);
    this->peso = peso;
    this->altura = altura;
}

void Persona::setNombre(string nombre)
{
    nombre = nombre;
}

void Persona::setEdad(int edad)
{
    edad = edad;
}

void Persona::setSexo(char sexo)
{
    sexo = sexo;
}

void Persona::setPeso(float peso)
{
    peso = peso;
}

void Persona::setAltura(float altura)
{
    altura = altura;
}

string Persona::getNombre()
{
    return nombre;
}

int Persona::getEdad()
{
    return edad;
}

int Persona::getDNI()
{
    return dni;
}

char Persona::getSexo()
{
    return sexo;
}

float Persona::getPeso()
{
    return peso;
}

float Persona::getAltura()
{
    return altura;
}

char Persona::comprobarSexo(char sexo)
{
    return (sexo == 'H' || sexo == 'M') ? sexo : 'H';
}

int Persona::calcularIMC()
{
    float imc = peso / pow(altura, 2);
    if (imc < 20)
        return -1;
    else if (imc >= 20 && imc <= 25)
        return 0;
    else
        return 1;
}

int Persona::generaDNI()
{
    int dni_numero = 10000000 + rand() % 90000000;
    return dni_numero;
}

void mostrarInformacionPersona(Persona &persona)
{
    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "DNI: " << persona.getDNI() << endl;
    cout << "Sexo: " << persona.getSexo() << endl;
    cout << "Peso: " << persona.getPeso() << endl;
    cout << "Altura: " << persona.getAltura() << endl;
}
bool Persona::esMayorDeEdad()
{
    if (edad >= 18)
    {
        return true;
    }
    else
        return false;
}
