Algoritmo Escala_salarial
	//Declarar variables
	Definir edad Como Entero
	Definir salario Como Entero
	Definir monto como real 
	// Acumulador
	monto <-0
	//Ingreso de datos
	Escribir "Ingrese su edad:"
	Leer edad
	//Proceso
	Si edad >=30 Entonces
		Escribir "Aporte sindical normal"
	SiNo 
		Escribir "20% adicional al aporte sindical"
	Fin Si
	//Proceso
	Si edad >30 y edad <100 Entonces
		Escribir "Ingrese su salario anual:"
		Leer salario
		Si salario <10000 Entonces
		monto <- salario*0.005
		SiNo
			si salario >=10000 y salario <=19999 Entonces
			monto <- salario*0.01
			SiNo
				si salario >=20000 y salario <=29999 Entonces
				monto <-salario*0.02
				SiNo
					si salario >30000 Entonces
						monto <-salario*0.025
					FinSi
				FinSi
			FinSi
		FinSi
	SiNo
		Si edad >0 y edad <30 Entonces
			Escribir "Ingrese su salario anual:"
			Leer salario
			Si salario <10000 Entonces
				monto <- salario*0.005
				monto <-monto+(monto*0.20)
			SiNo
				si salario >=10000 y salario <=19999 Entonces
					monto <- salario*0.01
					monto <-monto+(monto*0.20)
				SiNo
					si salario >=20000 y salario <=29999 Entonces
						monto <-salario*0.02
						monto <-monto+(monto*0.20)
					SiNo
						si salario >30000 Entonces
							monto <-salario*0.025
							monto <-monto+(monto*0.20)
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	Escribir 'Su edad es: ', edad
	Escribir 'su salario es: ', salario
	Escribir 'Su aporte sindical es: ', monto
	
FinAlgoritmo