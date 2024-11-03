#include<string>
#include "clasesexcepcion.h"
#include <iostream>

using namespace std;

void lanzaExcepcion() {
    throw MiExcepcion("Ocurrio un error en la funcion lanzaExcepcion");
}

int clasesexcepcion() {
    try {
        lanzaExcepcion();
    }
    catch (const MiExcepcion& e) {
        cout << "Excepcion capturada: " << e.what() << endl;
    }

    return 0;
}