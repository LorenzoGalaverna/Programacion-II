using namespace std;
#include <string>

class Cuenta {
private:
    string titular;
    double cantidad;
public:
    Cuenta(string cantidad);
    Cuenta(string cantidad, double cant);

    string getTitular();
    double getCantidad();
    void setTitular(string tit);   
    void setCantidad(double cant);

    void ingresar(double monto);
    void retirar(double monto);
};


