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
	float c1;
	float c2;
	float masa;
	float presion;
	float temperatura;
	float volumen;
	// Constantes
	c1 = 0.37;
	c2 = 460;
	// Entrada de datos por parte del usuario
	cout << "Ingrese la presion: " << endl;
	cin >> presion;
	cout << "Ingrese el volumen: " << endl;
	cin >> volumen;
	cout << "Ingrese la temperatura: " << endl;
	cin >> temperatura;
	// Proceso
	masa = (presion*volumen)/(c1*temperatura+c2);
	// Salida de datos al uauario
	cout << "La masa resultante es: " << masa << endl;
	return 0;
}

