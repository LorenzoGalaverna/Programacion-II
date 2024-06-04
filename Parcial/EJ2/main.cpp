#include <iostream>
#include <string>
using namespace std;

int main() {
    const int numLibros = 3;

    string* titulos;
    string* autores;

    titulos = new string[numLibros];
    autores = new string[numLibros];

    titulos[0] = "harry potter";
    autores[0] = "fulanito";
    
    titulos[1] = "el principito";
    autores[1] = "menganito";
    
    titulos[2] = "habitos atomicos";
    autores[2] = "juanceto";

    cout << "\nLibros ingresados:\n";
    for (int i = 0; i < numLibros; i++) {
        cout << "Libro " << i + 1 << ": " << titulos[i] << " escrito por " << autores[i] << endl;
    }

    delete[] titulos;
    delete[] autores;

    return 0;
}
