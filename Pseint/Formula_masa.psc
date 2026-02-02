Algoritmo Formula_masa
	Definir c1 Como Real
	Definir c2 Como Real
	Definir presion Como Real
	Definir volumen como real
	Definir temperatura Como Real
	
	//Constantes
	c1<-0.37
	c2<-460
	
	//Entrada de datos por parte del usuario
	Escribir 'Ingrese la presion: '
	Leer presion
	Escribir 'Ingrese el volumen: '
	Leer volumen
	Escribir 'Ingrese la temperatura: '
	Leer temperatura
	
	//Proceso 
	masa<-(presion*volumen)/(c1*temperatura + c2)
	
	//Salida de datos al uauario 
	Escribir 'La masa resultante es: ', masa
FinAlgoritmo
