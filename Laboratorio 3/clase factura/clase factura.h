#ifndef FACTURA_H
#define FACTURA_H

#include <string>

class Factura {
public:
    Factura(string, string, int, double);

    void establecerNumeroArticulo(string);
    string obtenerNumeroArticulo() const;

    void establecerDescripcion(string);
    string obtenerDescripcion() const;

    void establecerCantidad(int);
    int obtenerCantidad() const;

    void establecerPrecio(double);
    double obtenerPrecio() const;

    double obtenerMontoFactura() const;

private:
    string numeroArticulo;
    string descripcion;
    int cantidad;
    double precio;
};
#endif
