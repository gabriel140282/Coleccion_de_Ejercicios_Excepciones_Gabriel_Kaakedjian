#include "excepcionesnointerceptadas.h"
#include <iostream>

using namespace std;

void lanzaExcepcion3() {
    throw runtime_error("Error en la funcion lanzaExcepcion");
}

int excepcionesnointerceptadas() {
    lanzaExcepcion3();

    return 0;
}