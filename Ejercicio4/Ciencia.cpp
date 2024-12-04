//
// Created by Pablo Alcolea Sesse on 2/12/24.
//

#include "Ciencia.h"
#include <iostream>

namespace Ciencia1 {
    namespace Fisica {
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}


void ejercicio4() {
    std::cout << "Energia: " << Ciencia1::Fisica::calcularEnergia(10);
}