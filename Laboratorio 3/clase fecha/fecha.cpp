#include <iostream>
#include "Fecha.h"

using namespace std;

// constructor
Fecha::Fecha(int m, int d, int a) {
    // validar mes
    if (m >= 1 && m <= 12) {
        mes = m;
    } else {
        mes = 1;
    }

    // validar día
    if (d >= 1 && d <= 31) {
        dia = d;
    } else {
        dia = 1;
    }

    // año (no se valida en este ejercicio)
    anio = a;
}

// establecer mes
void Fecha::establecerMes(int m) {
    if (m >= 1 && m <= 12) {
        mes = m;
    } else {
        mes = 1;
    }
}

// obtener mes
int Fecha::obtenerMes() const {
    return mes;
}

// establecer día
void Fecha::establecerDia(int d) {
    if (d >= 1 && d <= 31) {
        dia = d;
    } else {
        dia = 1;
    }
}

// obtener día
int Fecha::obtenerDia() const {
    return dia;
}

// establecer año
void Fecha::establecerAnio(int a) {
    anio = a;
}

// obtener año
int Fecha::obtenerAnio() const {
    return anio;
}

// mostrar fecha
void Fecha::mostrarFecha() const {
    cout << mes << "/" << dia << "/" << anio << endl;
}
