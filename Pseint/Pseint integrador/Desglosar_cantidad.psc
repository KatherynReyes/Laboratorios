Algoritmo Desglosar_cantidad
	Definir cantidad Como real
	Definir billetes Como Entero
	Definir monedas como entero 
	
	Escribir 'Ingrese la cantidad: '
	Leer cantidad 
	
	billetes <-trunc(cantidad/200)
	Escribir 'El valor de 200 son: ', billetes
	cantidad <-cantidad-billetes*200
	
	billetes <-trunc(cantidad/100)
	Escribir 'El valor de 100 son: ', billetes
	cantidad <-cantidad-billetes*100
	
	billetes <-trunc(cantidad/50)
	Escribir 'El valor de 50 son: ', billetes
	cantidad <-cantidad-billetes*50
	
	billetes <-trunc(cantidad/20)
	Escribir 'El valor de 20 son: ', billetes
	cantidad <-cantidad-billetes*20
	
	billetes <-trunc(cantidad/10)
	Escribir 'El valor de 10 son: ', billetes
	cantidad <-cantidad-billetes*10
	
	billetes <-trunc(cantidad/5)
	Escribir 'El valor de 5 son: ', billetes
	cantidad <-cantidad-billetes*5
	
	monedas <-trunc(cantidad/0.50)
	Escribir 'El valor de 50 monedas son: ', monedas
	cantidad <-cantidad-monedas*0.50
	
	monedas <-trunc(cantidad/0.25)
	Escribir 'El valor de 25 monedas son: ', monedas
	cantidad <-cantidad-monedas*0.25
	
	monedas <-trunc(cantidad/0.10)
	Escribir 'El valor de 10 monedas son: ', monedas
	cantidad <-cantidad-monedas*0.10
	
	monedas <-trunc(cantidad/0.05)
	Escribir 'El valor de 5 monedas son: ', monedas
	cantidad <-cantidad-monedas*0.05
	
	monedas <-trunc(cantidad/1)
	Escribir 'El valor de 1 moneda son: ', monedas
	cantidad <-cantidad-monedas*1
	
FinAlgoritmo
