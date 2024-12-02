//
// Created by Pablo Alcolea Sesse on 2/12/24.
//


#ifndef CIRCULO_H
#define CIRCULO_H

constexpr double Pi = 3.14159265358979323846;

namespace Geometría {
    class Circulo {
    private:
        double radio;
    public:
        Circulo(double radio) : radio(radio) {}
        double calcularArea() {
            return Pi * radio * radio;
        }
        double calcularPerimetro() {
            return 2 * Pi * radio;
        }
    };
}
#endif // CIRCULO_H