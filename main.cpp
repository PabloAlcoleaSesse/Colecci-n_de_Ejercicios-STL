//
// Created by Pablo Alcolea Sesse on 4/12/24.
//

#include <iostream>
#include "Ejercicio1/Matematicas.h"

#include "Ejercicio3/Circ.h"
#include "Ejercicio4/Ciencia.h"
#include "Ejercicio2/ejercicio2.h"
#include "Ejercicio3/ejercicio3.h"
#include "Ejercicio5/ejercicio5.h"





int main() {
    int opcion;
    std::cout << "Introduce el numero del ejercicio que quieres ejecutar: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1: {
            ejercicio1();
            break;
        }case 2: {
            ejercicio2();
            break;
        }case 3: {
            ejercicio3();
            break;
        }case 4: {
            ejercicio4();
            break;
        }case 5: {
            ejercicio5();
            break;
        }default: { std::cout << "Ejercicio no encontrado" << std::endl; }
    }

    return 0;
}