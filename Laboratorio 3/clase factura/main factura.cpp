#include <iostream>
#include "Factura.h"
using namespace std;

int main() {
    Factura f("001", "Blusa", 14, 150);

    cout << "Pieza: " << f.obtenerNumeroArticulo() << endl;
    cout << "Descripcion: " << f.obtenerDescripcion() << endl;
    cout << "Cantidad: " << f.obtenerCantidad() << endl;
    cout << "Precio: " << f.obtenerPrecio() << endl;
    cout << "Monto total: " << f.obtenerMontoFactura() << endl;

    return 0;
}
