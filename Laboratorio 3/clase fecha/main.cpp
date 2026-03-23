#include <iostream>
#include "Fecha.h"
using namespace std;

int main() {
    Fecha fecha(23, 3, 2026);

    fecha.mostrarFecha();

    fecha.establecerDia(10);
    fecha.establecerMes(15);

    fecha.mostrarFecha();

    return 0;
