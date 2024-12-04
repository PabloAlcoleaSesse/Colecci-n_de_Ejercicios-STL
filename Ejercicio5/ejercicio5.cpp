//
// Created by Pablo Alcolea Sesse on 4/12/24.
//
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include "ejercicio5.h"
void ejercicio5() {
  // Vector
   std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);

    for (int i = 0; i < numeros.size(); i++) {
        std::cout << numeros[i] << std::endl;
    }
    // Map
    std::map<std::string, int> edad;
    edad["Pablo"] = 25;
    edad.erase("18");

    std::cout << "Edad de Pablo: " << edad["Pablo"] << std::endl;

    // Set
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);
    std::cout << "Elementos del conjunto: ";
    for (auto it = conjunto.begin(); it != conjunto.end(); it++) {
        std::cout << *it << " ";
    }
}
