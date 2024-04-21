#include <iostream>

class Fecha {
private:
    int dia;
    int mes;
    int anio;

public:
    // Constructor que inicializa la fecha a una fecha dada
    Fecha(int d, int m, int a) : dia(d), mes(m), anio(a) {}

    // Constructor que inicializa la fecha en 01/01/1900
    Fecha() : dia(1), mes(1), anio(1900) {}

    // Función de carga de los datos miembro
    void cargarFecha(int d, int m, int a) {
        dia = d;
        mes = m;
        anio = a;
    }

    // Función de muestra de los datos miembro
    void mostrarFecha() {
        std::cout << dia << "/" << mes << "/" << anio << std::endl;
    }

    // Sobrecarga del operador ++ (incremento de la fecha en 1 día)
    Fecha operator++() {
        dia++;
        // Verificar si se debe incrementar el mes o el año
        // según el calendario real
        // ...

        return *this;
    }

    // Sobrecarga del operador -- (decremento de la fecha en 1 día)
    Fecha operator--() {
        dia--;
        // Verificar si se debe decrementar el mes o el año
        // según el calendario real
        // ...

        return *this;
    }

    // Sobrecarga del operador + (suma a una fecha un cierto número de días)
    Fecha operator+(int dias) {
        Fecha nuevaFecha(*this);
        nuevaFecha.dia += dias;
        // Verificar si se debe ajustar el mes o el año
        // según el calendario real
        // ...

        return nuevaFecha;
    }

    // Sobrecarga del operador - (resta a una fecha un cierto número de días)
    Fecha operator-(int dias) {
        Fecha nuevaFecha(*this);
        nuevaFecha.dia -= dias;
        // Verificar si se debe ajustar el mes o el año
        // según el calendario real
        // ...

        return nuevaFecha;
    }
};

int main() {
    // Crear una fecha usando el constructor que inicializa la fecha a una fecha dada
    Fecha fecha1(10, 5, 2022);
    fecha1.mostrarFecha();  // Output: 10/5/2022

    // Crear una fecha usando el constructor que inicializa la fecha en 01/01/1900
    Fecha fecha2;
    fecha2.mostrarFecha();  // Output: 1/1/1900

    // Incrementar la fecha en 1 día usando el operador ++
    ++fecha1;
    fecha1.mostrarFecha();  // Output: 11/5/2022

    // Sumar 5 días a la fecha usando el operador +
    Fecha fecha3 = fecha2 + 5;
    fecha3.mostrarFecha();  // Output: 6/1/1900

    return 0;
}