//
// Created by Pablo Alcolea Sesse on 4/12/24.
//

#include "ejercicio3.h"
#include <iostream>
#include "Circ.h"
void ejercicio3() {
    Geometria::Circulo circulo(5);
    std::cout << "Area del circulo: " << circulo.calcularArea() << std::endl;
    std::cout << "Perimetro del circulo: " << circulo.calcularPerimetro() << std::endl;
}