#ifndef BANCO_H
#define BANCO_H

#include <iostream>
#include <string>
using namespace std;

class Banco
{
private:
    string nombre;
public:
    Banco(string nombre);
    string getNombre();
};

#endif
