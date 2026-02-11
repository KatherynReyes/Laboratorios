// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int billetes;
	float cantidad;
	int monedas;
	cout << "Ingrese la cantidad: " << endl;
	cin >> cantidad;
	billetes = int(cantidad/200);
	cout << "El valor de 200 son: " << billetes << endl;
	cantidad = cantidad-billetes*200;
	billetes = int(cantidad/100);
	cout << "El valor de 100 son: " << billetes << endl;
	cantidad = cantidad-billetes*100;
	billetes = int(cantidad/50);
	cout << "El valor de 50 son: " << billetes << endl;
	cantidad = cantidad-billetes*50;
	billetes = int(cantidad/20);
	cout << "El valor de 20 son: " << billetes << endl;
	cantidad = cantidad-billetes*20;
	billetes = int(cantidad/10);
	cout << "El valor de 10 son: " << billetes << endl;
	cantidad = cantidad-billetes*10;
	billetes = int(cantidad/5);
	cout << "El valor de 5 son: " << billetes << endl;
	cantidad = cantidad-billetes*5;
	monedas = int(cantidad/0.50);
	cout << "El valor de 50 monedas son: " << monedas << endl;
	cantidad = cantidad-monedas*0.50;
	monedas = int(cantidad/0.25);
	cout << "El valor de 25 monedas son: " << monedas << endl;
	cantidad = cantidad-monedas*0.25;
	monedas = int(cantidad/0.10);
	cout << "El valor de 10 monedas son: " << monedas << endl;
	cantidad = cantidad-monedas*0.10;
	monedas = int(cantidad/0.05);
	cout << "El valor de 5 monedas son: " << monedas << endl;
	cantidad = cantidad-monedas*0.05;
	monedas = int(cantidad/1);
	cout << "El valor de 1 moneda son: " << monedas << endl;
	cantidad = cantidad-monedas*1;
	return 0;
}

