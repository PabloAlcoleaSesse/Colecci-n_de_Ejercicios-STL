//
// Created by Pablo Alcolea Sesse on 2/12/24.
//

#include <iostream>
#include "Circ.h"

namespace Geometria {

    Circulo::Circulo(int radio) : radio(radio){}

    double Circulo::calcularArea() const {
        return Pi * radio * radio;
    }
    double Circulo::calcularPerimetro() const {
        return 2 * Pi * radio;
    }


}




