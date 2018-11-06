Proceso PromedioLims
	Definir a,b,c,d,sum,i Como Real;
	a=azar(100);
	b=azar(100);
	Si a>b Entonces
		d = a;
		a = b;
		b = d;
	FinSi
	c=0;
	sum=0;
	Para i=a Hasta b Hacer
		sum=sum+i;
		c=c+1;
	FinPara
	Escribir "Valor inferior: ",a;
	Escribir "Valor superior: ",b;
	Escribir "Sumatoria entre Limites y numeros entre ellos: ",sum;
	Escribir "Total de numeros Sumados: ",c;
	Escribir "Promedio de los limites y los numeros entre ellos: ", sum/c;
FinProceso
