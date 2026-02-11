// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int edad;
	float monto;
	int salario;
	// Declarar variables
	// Acumulador
	monto = 0;
	// Ingreso de datos
	cout << "Ingrese su edad:" << endl;
	cin >> edad;
	// Proceso
	if (edad>=30) {
		cout << "Aporte sindical normal" << endl;
	} else {
		cout << "20% adicional al aporte sindical" << endl;
	}
	// Proceso
	if (edad>30 && edad<100) {
		cout << "Ingrese su salario anual:" << endl;
		cin >> salario;
		if (salario<10000) {
			monto = salario*0.005;
		} else {
			if (salario>=10000 && salario<=19999) {
				monto = salario*0.01;
			} else {
				if (salario>=20000 && salario<=29999) {
					monto = salario*0.02;
				} else {
					if (salario>30000) {
						monto = salario*0.025;
					}
				}
			}
		}
	} else {
		if (edad>0 && edad<30) {
			cout << "Ingrese su salario anual:" << endl;
			cin >> salario;
			if (salario<10000) {
				monto = salario*0.005;
				monto = monto+(monto*0.20);
			} else {
				if (salario>=10000 && salario<=19999) {
					monto = salario*0.01;
					monto = monto+(monto*0.20);
				} else {
					if (salario>=20000 && salario<=29999) {
						monto = salario*0.02;
						monto = monto+(monto*0.20);
					} else {
						if (salario>30000) {
							monto = salario*0.025;
							monto = monto+(monto*0.20);
						}
					}
				}
			}
		}
	}
	cout << "Su edad es: " << edad << endl;
	cout << "su salario es: " << salario << endl;
	cout << "Su aporte sindical es: " << monto << endl;
	return 0;
}

