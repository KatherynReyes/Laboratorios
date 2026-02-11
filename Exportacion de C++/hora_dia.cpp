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
	int hora;
	// Definir variables
	// Entrada de datos
	cout << "Ingrese la hora(0 a 23):" << endl;
	cin >> hora;
	// Proceso
	if (hora>=0 && hora<=5) {
		cout << "Es madrugada" << endl;
	} else {
		cout << "No es madrugada" << endl;
		if (hora>=6 && hora<=11) {
			cout << "Es mañana" << endl;
		} else {
			cout << "No es mañana" << endl;
			if (hora>=12 && hora<=13) {
				cout << "Es mediodía" << endl;
			} else {
				cout << "No es mediodía" << endl;
				if (hora>=14 && hora<=19) {
					cout << "Es tarde" << endl;
				} else {
					cout << "No es tarde" << endl;
					if (hora>=20 && hora<=23) {
						cout << "Es noche" << endl;
					} else {
						cout << "No es noche" << endl;
					}
				}
			}
		}
	}
	return 0;
}

