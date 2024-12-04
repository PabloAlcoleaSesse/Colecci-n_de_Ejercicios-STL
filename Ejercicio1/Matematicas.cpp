//
// Created by Pablo Alcolea Sesse on 2/12/24.
//

#include <iostream>
#include "Matematicas.h"
namespace Matematicas {
    int suma(int a, int b) {
        return a + b;
    }
int resta(int a, int b) {
        return a - b;
    }
}

void ejercicio1() {
    std::cout << "Suma: " << Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::resta(5, 3) << std::endl;
}
