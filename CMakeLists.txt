cmake_minimum_required(VERSION 3.29)
project(Coleccion_de_Ejercicios_Excepciones_Gabriel_Kaakedjian)

set(CMAKE_CXX_STANDARD 14)

add_executable(Coleccion_de_Ejercicios_Excepciones_Gabriel_Kaakedjian
    main.cpp
        Ejercicio1/banderas.h
        Ejercicio1/banderas.cpp
        Ejercicio2/excepciones.h
        Ejercicio2/excepciones.cpp
        Ejercicio3/excepcionfunciones.cpp
        Ejercicio4/clasesexcepcion.h
        Ejercicio4/clasesexcepcion.cpp
        Ejercicio5/excepcionreactivacion.h
        Ejercicio5/excepcionreactivacion.cpp
        Ejercicio6/excepcionesnointerceptadas.h
        Ejercicio6/excepcionesnointerceptadas.cpp
        Ejercicio7/adquisicionrecursos.h
        Ejercicio7/adquisicionrecursos.cpp)
