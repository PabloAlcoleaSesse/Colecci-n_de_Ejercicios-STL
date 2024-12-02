#include <iostream>
#include "circulo.h"
#include "tiangulo.h"

int main() {
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(5) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaTriangulo(10,5) << std::endl;
    return 0;
}
