#include "adquisicionrecursos.h"
#include<iostream>
#include<stdexcept>
#include<fstream>

using namespace std;

void escribeEnArchivo(ofstream& file) {
    if (!file.is_open()) {
        throw runtime_error("No se puede escribir en un archivo cerrado");
    }
    file << "Hola, mundo!";
}

int adquisicionrecursos(bool simulateError) {
    ofstream file("../archivo.txt"); /*Se colocan los 2 puntos porque este archivo se crea dentro de la carpeta cmake-build-debug, y para
                                        que se cree en el directorio raíz colocamos los dos puntos, que significa que estoy subiendo un directorio
                                        hacia atrás*/
    try {
        if(simulateError) {
            file.close(); // Cierra el archivo para simular un error
        }
        escribeEnArchivo(file);
    }
    catch (const runtime_error& e) {
        cout << "Excepcion capturada: " << e.what() << endl;
    }

    // Asegurarse de que el archivo esté cerrado
    if (file.is_open()) {
        file.close();
    }

    return 0;
}