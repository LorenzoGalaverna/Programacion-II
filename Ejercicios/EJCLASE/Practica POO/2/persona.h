using namespace std;
#include <iostream>

class Persona {
private:
    string nombre;
    int edad;
    int dni;
    char sexo;
    float peso;
    float altura;

    char comprobarSexo(char sexo);
public:
    Persona();
    Persona(string nombre, int edad, char sexo);
    Persona(string nombre, int edad, char sexo, float peso, float altura);

    string getNombre();
    int getEdad();
    int getDNI();
    char getSexo();
    float getPeso();
    float getAltura();
    void setNombre(string nombre);   
    void setEdad(int edad);
    void setSexo(char sexo);
    void setPeso(float peso);
    void setAltura(float altura);

    int calcularIMC();
    int generaDNI();
    bool esMayorDeEdad();
};
void mostrarInformacionPersona(Persona &persona);

