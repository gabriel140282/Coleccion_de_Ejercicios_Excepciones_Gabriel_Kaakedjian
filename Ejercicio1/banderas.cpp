#include "banderas.h"
#include <iostream>

using namespace std;

float banderas(float a, float b) {
    bool errorFlag = false;
    float resultado = 0;

    if (b == 0) {
        errorFlag = true;
    }
    else {
        resultado = a / b;
    }

    if (errorFlag){
        cout<<"Ocurrio un error: division por cero"<<endl;
        return 0.0f;
    }
    cout<<"El resultado de la division es: "<<resultado<<endl;
    return  resultado;
}
