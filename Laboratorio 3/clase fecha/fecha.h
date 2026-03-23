#ifndef FECHA_H
#define FECHA_H

class Fecha {
public:
    Fecha(int, int, int);

    void establecerMes(int);
    int obtenerMes() const;

    void establecerDia(int);
    int obtenerDia() const;

    void establecerAño(int);
    int obtenerAño() const;

    void mostrarFecha() const;

private:
    int mes;
    int dia;
    int año;
};

#endif
