#ifndef CLASESEXCEPCION_H
#define CLASESEXCEPCION_H

#include<iostream>
using namespace std;

// Definición de la clase de excepción personalizada
class MiExcepcion : public exception {
private:
    string mensaje;
public:
    explicit MiExcepcion(const string& msg) : mensaje(msg) {}
    const char* what() const noexcept override {
        return mensaje.c_str();
    }
};

int clasesexcepcion();

#endif //CLASESEXCEPCION_H