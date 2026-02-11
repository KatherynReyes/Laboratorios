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
	int ancho;
	float area;
	float cantidad;
	int largo;
	float perimetro;
	int precio;
	float precio2;
	// Definir variables
	// Acumulador
	cantidad = 0;
	precio2 = 0;
	// Ingreso de datos
	cout << "Ingrese el ancho del terreno" << endl;
	cin >> ancho;
	cout << "Ingrese el largo del terreno" << endl;
	cin >> largo;
	cout << "Ingrese el precio del terreno" << endl;
	cin >> precio;
	// Calcular area
	area = ancho*largo;
	// Calcular precio
	precio2 = area*precio;
	// calcular perimetro
	perimetro = 2*(ancho+largo);
	// calcular cantidad
	cantidad = perimetro*3;
	// Salida
	cout << "El precio del terreno es: " << precio2 << endl;
	cout << "La cantidad de metrs de alambre es: " << cantidad << endl;
	return 0;
}

