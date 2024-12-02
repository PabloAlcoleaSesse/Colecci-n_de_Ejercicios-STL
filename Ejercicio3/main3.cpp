//
// Created by Pablo Alcolea Sesse on 2/12/24.
//

#include <iostream>
#include "Circ.h"
int main() {
    Geometría::Circulo circulo(5);
    std::cout << "Area del circulo: " << circulo.calcularArea() << std::endl;
}