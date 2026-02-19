Algoritmo Calculadora
	//Programa de una calculadora
	//Definir variables
	
	Definir numeroUno Como Entero
	Definir numeroDos como entero
	Definir total Como Real
	Definir opcionElegida como caracter
	
	total <-0 
	
	Escribir "Ingrese Primer Numero"
	Leer numeroUno
	Escribir "Ingrese Segundo Numero"
	Leer numeroDos
	
	Escribir "Operaciones numericas:"
	Escribir " A) Suma"
	Escribir " B) Resta"
	Escribir " C) Multiplicacion"
	Escribir " D) Division" 
	Leer opcionElegida
	Segun opcionElegida Hacer
		'A':
			total <-numeroUno+numeroDos
		'B':
			total <-numeroUno-numeroDos
		'C':
			total <-numeroUno*numeroDos
		'D':
			Si numeroDos <>0 Entonces
				total <-numeroUno/numeroDos
			SiNo 
				Escribir "No se puede dividir entre 0"
			FinSi
			De Otro Modo:
			Escribir "Ingrese una opcion valida"
	Fin Segun
	Escribir 'El resultado es: ',total
	
	

	
	
	
FinAlgoritmo
