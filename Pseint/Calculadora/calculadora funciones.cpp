#include <iostream>
using namespace std;

float suma(int a, int b){
return a+b;
}
float resta(int a, int b){
return a-b;
}
float multiplicacion(int a, int b){
return a*b;
}
float division(int a, int b){
    if(b !=0){
        return (float)a / b;
    } else {
    cout << "No se puede dividir entre 0" <<endl;
    return 0;
    }
}

int main() {
	int numerodos;
	int numerouno;
	char opcionelegida;
	float total;

	while (true){

	cout << "Ingrese Primer Numero" << endl;
	cin >> numerouno;
	cout << "Ingrese Segundo Numero" << endl;
	cin >> numerodos;
	cout << "Operaciones numericas:" << endl;
	cout << " A) Suma" << endl;
	cout << " B) Resta" << endl;
	cout << " C) Multiplicacion" << endl;
	cout << " D) Division" << endl;
	cout << " E) Continuar" << endl;
	cout << " F) Salir" << endl;
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
	}
	return 0;
	}
