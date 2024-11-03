#include "excepcionfunciones.h"
#include<iostream>
#include<stdexcept>

using namespace std;

void func3() {
    throw runtime_error("Error en func3");
}

void func2() {
    func3();
}

void func1() {
    func2();
}

int excepcionfunciones() {
    try {
        func3();
    }
    catch (const runtime_error& e) {
        cout << "Excepcion capturada en main: " << e.what() << endl;
    }

    return 0;
}