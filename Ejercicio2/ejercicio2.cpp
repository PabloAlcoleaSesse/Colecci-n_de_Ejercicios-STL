//
// Created by Pablo Alcolea Sesse on 4/12/24.
//

#include "ejercicio2.h"
#include <iostream>
#include "circulo.h"
#include "tiangulo.h"

void ejercicio2() {
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(5) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaTriangulo(10,5) << std::endl;
}
