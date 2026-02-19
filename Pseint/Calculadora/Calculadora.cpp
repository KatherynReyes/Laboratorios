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
	int numerodos;
	int numerouno;
	char opcionelegida;
	float total;
	// Programa de una calculadora
	// Definir variables
	total = 0;
	cout << "Ingrese Primer Numero" << endl;
	cin >> numerouno;
	cout << "Ingrese Segundo Numero" << endl;
	cin >> numerodos;
	cout << "Operaciones numericas:" << endl;
	cout << " A) Suma" << endl;
	cout << " B) Resta" << endl;
	cout << " C) Multiplicacion" << endl;
	cout << " D) Division" << endl;
	cin >> opcionelegida;
	switch (opcionelegida){
	case 'A':
		total = numerouno+numerodos;
		break;
	case 'B':
		total = numerouno-numerodos;
		break;
	case 'C':
		total = numerouno*numerodos;
		break;
	case 'D':
		if (numerodos!=0) {
			total = (float)numerouno/numerodos;
		} else {
			cout << "No se puede dividir entre 0" << endl;
		}
		break;
	default:
		cout << "Ingrese una opcion valida" << endl;
	}
	cout << "El resultado es: " << total << endl;
	return 0;
}

