#include "excepcionreactivacion.h"
#include<stdexcept>
#include <iostream>

using namespace std;

void lanzaExcepcion2() {
    throw runtime_error("Error en la funcion lanzaExcepcion");
}

int excepcionreactivacion() {
    try {
        try {
            lanzaExcepcion2();
        }
        catch (const runtime_error& e) {
            cout << "Excepcion capturada y manejada. Reactivando..." << endl;
            throw; // Relanza la excepción
        }
    }
    catch (const runtime_error& e) {
        cout << "Excepcion reactivada capturada: " << e.what() << endl;
    }

    return 0;
}
