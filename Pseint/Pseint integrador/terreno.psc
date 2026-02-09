Algoritmo terreno
	//Definir variables
	Definir ancho Como Entero
	Definir largo Como Entero
	Definir precio Como entero
	Definir cantidad, precio2 Como Real
	Definir area como real
	Definir perimetro como real
	//Acumulador
	cantidad <-0
	precio2 <-0

	//Ingreso de datos
	Escribir "Ingrese el ancho del terreno"
	Leer ancho
	Escribir "Ingrese el largo del terreno"
	Leer largo
	Escribir "Ingrese el precio del terreno"
	Leer precio 
	//Calcular area
	area <-ancho*largo
	//Calcular precio
	precio2 <-area*precio
	//calcular perimetro
	perimetro <-2*(ancho + largo)
	//calcular cantidad
	cantidad <-perimetro*3
	//Salida
	Escribir 'El precio del terreno es: ', precio2
	Escribir 'La cantidad de metrs de alambre es: ', cantidad
	
	
	
	
	
FinAlgoritmo
