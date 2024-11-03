#include "Ejercicio1/banderas.h"
#include "Ejercicio2/excepciones.h"
#include "Ejercicio3/excepcionfunciones.h"
#include "Ejercicio4/clasesexcepcion.h"
#include "Ejercicio5/excepcionreactivacion.h"
#include "Ejercicio6/excepcionesnointerceptadas.h"
#include "Ejercicio7/adquisicionrecursos.h"

int main() {
    banderas(8.54, 2); //BIEN
    excepciones(5,0); //BIEN
    excepcionfunciones(); //BIEN
    clasesexcepcion(); //BIEN
    excepcionreactivacion(); //BIEN
    excepcionesnointerceptadas(); //BIEN
    adquisicionrecursos(false); //BIEN
    return 0;
}