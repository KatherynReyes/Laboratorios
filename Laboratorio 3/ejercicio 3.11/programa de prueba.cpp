#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main() {
    // crear objeto con curso e instructor
    LibroCalificaciones libro("Programacion C++", "Ing. Lima");


    libro.mostrarMensaje();

    // modificar datos
    libro.establecerNombreCurso("Estructuras de Datos");
    libro.establecerNombreInstructor("Dra. Perez");

    // mostrar datos actualizados
    libro.mostrarMensaje();

    return 0;
}
