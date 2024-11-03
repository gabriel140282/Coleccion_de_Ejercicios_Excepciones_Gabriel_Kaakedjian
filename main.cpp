#include "Ejercicio1/banderas.h"
#include "Ejercicio2/excepciones.h"
#include "Ejercicio3/excepcionfunciones.h"
#include "Ejercicio4/clasesexcepcion.h"
#include "Ejercicio5/excepcionreactivacion.h"
#include "Ejercicio6/excepcionesnointerceptadas.h"
#include "Ejercicio7/adquisicionrecursos.h"

int main() {
    banderas(8.54, 2);
    excepciones(5,0);
    excepcionfunciones();
    clasesexcepcion();
    excepcionreactivacion();
    excepcionesnointerceptadas(); /*Esta función al arrojar un error (Process finished with exit code 3) evita que la última función
                                    cree el archivo 'archivo.txt'. Para que se cree el archivo correctamente, hay que comentar o deshabilitar
                                    esta función.*/
    adquisicionrecursos(false);
    return 0;
}