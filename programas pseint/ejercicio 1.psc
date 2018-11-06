Proceso Multiplos
	Definir a,b,c,d Como Entero;
	a = azar(100);
	b = azar(100);
	c = 0;
	Si a>b Entonces
		d = a;
		a = b;
		b = d;
	FinSi
	Escribir ' El limite inferior es ',a;
	Escribir 'El limite superior es ',b;
	Escribir '......';
	Para c<-a Hasta b Hacer
		Si a MOD 3=0 Y a MOD 5=0 Entonces
			Escribir a,' Es multiplo de 3 y 5 ';
		SiNo
			Si a MOD 5=0 Entonces
				Escribir a,' Es multiplo de 5';
			SiNo
				Si a MOD 3=0 Entonces
					Escribir a,' Es multiplo de 3';
				SiNo
					Escribir a;
				FinSi
			FinSi
		FinSi
		a <- a+1;
	FinPara
FinProceso

