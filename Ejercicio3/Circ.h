//
// Created by Pablo Alcolea Sesse on 2/12/24.
//


#ifndef CIRCULO_H
#define CIRCULO_H

constexpr double Pi = 3.14159265358979323846;

namespace Geometria {
    class Circulo {
    private:
        double radio;
    public:
       explicit Circulo(int radio);
        double calcularArea() const;
        double calcularPerimetro() const;
    };
}

void ejercicio3();
#endif // CIRCULO_H