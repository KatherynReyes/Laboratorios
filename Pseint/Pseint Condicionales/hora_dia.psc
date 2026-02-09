Algoritmo hora_dia
	//Definir variables
	Definir hora Como Entero
	//Entrada de datos
	Escribir "Ingrese la hora(0 a 23):"
	Leer hora
	//Proceso
	Si hora >=0 y hora <=5 Entonces
		Escribir "Es madrugada"
	SiNo
		Escribir "No es madrugada"
		Si hora >=6 y hora <=11 Entonces
			Escribir "Es mañana"
		SiNo
			Escribir "No es mañana"
			Si hora >=12 y hora <=13 Entonces
				Escribir "Es mediodía"
			SiNo
				Escribir "No es mediodía"
				Si hora >=14 y hora <=19 Entonces
					Escribir "Es tarde"
				SiNo 
					Escribir "No es tarde"
					Si hora >=20 y hora <=23 Entonces
						Escribir "Es noche"
					SiNo
						Escribir "No es noche"
					FinSi
				FinSi
			FinSi
		FinSi
	Fin Si
FinAlgoritmo
