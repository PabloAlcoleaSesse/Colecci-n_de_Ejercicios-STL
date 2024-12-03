cmake_minimum_required(VERSION 3.29)
project(Colecci_n_de_Ejercicios_STL)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicio_1
        "Ejercicio1/Matematicas.cpp"
        "Ejercicio1/Matematicas.h"
        "Ejercicio1/main1.cpp"
        "Ejercicio2/circulo.h"
        "Ejercicio2/main2.cpp")
add_executable(Ejercicio_2
        "Ejercicio2/circulo.cpp"
        "Ejercicio2/circulo.h"
        "Ejercicio2/main2.cpp"
        "Ejercicio2/tiangulo.cpp"
        "Ejercicio2/tiangulo.h")
add_executable(Ejercicio_3
        "Ejercicio3/main3.cpp"
        Ejercicio3/Circ.cpp
        Ejercicio3/Circ.h)
add_executable(Ejercicio_4
        "Ejercicio4/main4.cpp"
        "Ejercicio4/Ciencia.cpp"
        "Ejercicio4/Ciencia.h"
         )
add_executable(Ejercicio_5
"Ejercicio5/main5.cpp")