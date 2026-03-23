#include "Factura.h"
#include <iostream>

using namespace std;

Factura::Factura(string num, string desc, int cant, double prec) {
    numeroArticulo = num;
    descripcion = desc;

    // validar cantidad
    if (cant > 0) {
        cantidad = cant;
    } else {
        cantidad = 0;
    }

    // validar precio
    if (prec > 0) {
        precio = prec;
    } else {
        precio = 0.0;
    }
}

// establecer número de articulo
void Factura::establecerNumeroArticulo(string num) {
    numeroArticulo = num;
}

// obtener número de articulo
string Factura::obtenerNumeroArticulo() const {
    return numeroArticulo;
}

// establecer descripción
void Factura::establecerDescripcion(string desc) {
    descripcion = desc;
}

// obtener descripción
string Factura::obtenerDescripcion() const {
    return descripcion;
}

// establecer cantidad
void Factura::establecerCantidad(int cant) {
    if (cant > 0) {
        cantidad = cant;
    } else {
        cantidad = 0;
    }
}

// obtener cantidad
int Factura::obtenerCantidad() const {
    return cantidad;
}

// establecer precio
void Factura::establecerPrecio(double prec) {
    if (prec > 0) {
        precio = prec;
    } else {
        precio = 0.0;
    }
}

// obtener precio
double Factura::obtenerPrecio() const {
    return precio;
}

// calcular monto total
double Factura::obtenerMontoFactura() const {
    return cantidad * precio;
}
