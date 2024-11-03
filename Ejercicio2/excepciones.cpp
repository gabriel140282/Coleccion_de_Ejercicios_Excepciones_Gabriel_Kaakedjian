#include "excepciones.h"
#include<iostream>
#include<stdexcept>

using namespace std;


// Versión de la función que lanza una excepción
float divideException(int a, int b) {
    if (b == 0) {
        throw invalid_argument("Division por cero"); // lanza una excepción
    }
    else {
        return a / b;
    }
}

void excepciones(int a, int b) {

    // Uso de la versión que lanza una excepción
    try {
        float result = divideException(a, b);

        cout << result << endl;
        //return result;
    }
    catch (const invalid_argument& e) {
        cout << "Excepcion: " << e.what() << endl;
    }
}