#include <iostream>
// Crear un puntero p de tipo int y hacer que apunte a una variable a.

int main() {
int a,*p;
p = &a;
std::cout << "El valor de p es: " << a << std::endl;
return 0;
}
