#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

//constructor con dos parametros
LibroCalificaciones::LibroCalificaciones(string curso, string instructor)
: nombreCurso(curso), nombreInstructor(instructor)
{
}//establecer curso
void LibroCalificaciones::establecerNombreCurso(string curso){
    nombreCurso = curso;
    }
//obtener curso
string LibroCalificaciones::obtenerNombreCurso() const;
    return nombreCurso;

//establecer instructor
void LibroCalificaciones::establecerNombreInstructor(string instructor){
    nombreInstructor = instructor;
    }
//obtener instructor
string LibroCalificaciones::obtenerNombreInstructor() const;
    return nombreInstructor;

//mensaje codificado
void LibroCalificaciones::mostrarMensaje() const {
cout << "Bienvenido al libro de calificaciones para\n" << nombreCurso << "!\n" << "Este curso es presentado por: " << nombreInstructor << endl;
}
