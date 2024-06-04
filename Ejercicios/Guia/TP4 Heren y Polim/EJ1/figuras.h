// figuras.h

#ifndef FIGURAS_H
#define FIGURAS_H

class FiguraGeometrica {
public:
    virtual double calcularPerimetro() const = 0;
    virtual double calcularArea() const = 0;
    virtual double calcularRazonSuperficiePerimetro() const = 0;
    virtual void mostrar() const = 0;
};

class Punto : public FiguraGeometrica {
private:
    double x, y;

public:
    Punto(double x, double y);
    double calcularPerimetro() const override;
    double calcularArea() const override;
    double calcularRazonSuperficiePerimetro() const override;
    void mostrar() const override;
};

class Circulo : public FiguraGeometrica {
private:
    double radio;
    double centroX, centroY;

public:
    Circulo(double radio, double centroX, double centroY);
    double calcularPerimetro() const override;
    double calcularArea() const override;
    double calcularRazonSuperficiePerimetro() const override;
    void mostrar() const override;
};

class PoligonoRegular : public FiguraGeometrica {
private:
    int numLados;
    double longitudLado;

public:
    PoligonoRegular(int numLados, double longitudLado);
    double calcularPerimetro() const override;
    double calcularArea() const override;
    double calcularRazonSuperficiePerimetro() const override;
    void mostrar() const override;
};

#endif
