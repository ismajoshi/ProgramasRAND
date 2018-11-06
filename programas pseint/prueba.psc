Algoritmo DIVS
	Definir a, primo,j Como Entero;	
	a=-1;
	primo =0;
	mientras a<0 Hacer
		Escribir "ingrese un valor numérico mayor a 0 para continuar";
		Leer a;
	FinMientras
	Escribir "Has ingresado: ",a;
	Si a>1 Entonces
		mientras a>1 hacer
			Si a%2=0 Entonces
				a=a/2;
				primo=0;
				Para j=1 Hasta (a) Hacer
					Si a%j=0 Entonces
						primo=primo+1;
					FinSi
				FinPara
				si primo=2 Entonces
					Escribir a, " Es Primo";
				SiNo
					Escribir a, " No Es Primo";
				FinSi				
			SiNo
				a=(a*3)+1;
				a=a/2;
				primo=0;
				Para j=1 Hasta (a) Hacer
					Si a%j=0 Entonces
						primo=primo+1;
					FinSi
				FinPara
				si primo=2 Entonces
					Escribir a, " Es Primo";
				sino
					Escribir a, " No Es Primo";
				FinSi
			FinSi
			primo = 0;
			
		FinMientras
		
	SiNo
		Escribir "Ha ingresado el " ,a ," es el numero mas pequeño posible";
	FinSi 	
	
FinAlgoritmo
