Proceso AzarPromedio
	Definir n1,n2,n3,n4,n5,n6,p,ma,men,nma,nmen,w Como Real;
	n1 <- azar(20);
	n2 <- azar(20);
	n3 <- azar(20);
	n4 <- azar(20);
	n5 <- azar(20);
	n6 <- azar(20);
	p <- (n1+n2+n3+n4+n5+n6)/6;
	p <- p*100;
	p <- trunc(p);
	p <- p/100;
	ma <- abs(p-n1);
	nma <- n1;
	w <- abs(p-n2);
	Si w>ma Entonces
		nma <- n2;
		ma <- w;
	FinSi
	w <- abs(p-n3);
	Si w>ma Entonces
		nma <- n3;
		ma <- w;
	FinSi
	w <- abs(p-n4);
	Si w>ma Entonces
		nma <- n4;
		ma <- w;
	FinSi
	w <- abs(p-n5);
	Si w>ma Entonces
		nma <- n5;
		ma <- w;
	FinSi
	w <- abs(p-n6);
	Si w>ma Entonces
		nma <- n6;
		ma <- w;
	FinSi
	men <- abs(p-n1);
	nmen <- n1;
	w <- abs(p-n2);
	Si w<ma Entonces
		nmen <- n2;
		men <- w;
	FinSi
	w <- abs(p-n3);
	Si w<ma Entonces
		nmen <- n3;
		men <- w;
	FinSi
	w <- abs(p-n4);
	Si w<ma Entonces
		nmen <- n4;
		men <- w;
	FinSi
	w <- abs(p-n5);
	Si w<ma Entonces
		nmen <- n5;
		men <- w;
	FinSi
	w <- abs(p-n6);
	Si w<ma Entonces
		nmen <- n6;
		men <- w;
	FinSi
	Escribir 'Los numeros generados fueron: ',n1,' ',n2,' ',n3,' ',n4,' ',n5,' ',n6;
	Escribir 'El promedio fue: ',p;
	Escribir 'El numero más alejado del promedio fue: ',nma,'  con ',ma,' distancia al promedio';
	Escribir 'El numero más cercano del promedio fue: ',nmen,'  con ',men,' distancia al promedio';
FinProceso

