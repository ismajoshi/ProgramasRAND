Proceso clase_1
	Definir opcion,resp como entero;
	Definir n, t, triangular Como Real;
	Definir x1,x2,x3,x4,y1,y2,y3,y4, ab,ac,ad Como Real;
	Definir n1,n2, resultado como Real;
	Definir r1,r2,r3, k1, k2, k3, k4ma,k4me como Real;
	Repetir
		Escribir " 1. Validar numeros triangulares";
		Escribir " 2. Verificar rectangulo dando puntos";
		Escribir " 3. Redondear una division";
		Escribir " 4. Circulos de Descartes";
		leer opcion;
		Segun opcion Hacer
			1:
				Escribir "Ingrese el numero que quiere verificar: ";
				Leer n;
				t=0;
				triangular=(t*(t+1))/2;
				Mientras n > triangular Hacer
					t=t+1;
					triangular=(t*(t+1))/2;
				FinMientras
				si n=triangular Entonces
					Escribir "El numero es Triangular";
				SiNo
					Escribir "El numero no es triangular";
			FinSi
			
			2:
				Escribir "A Continuacion se ingresaran las coordenadas de los 4 puntos del Rectangulo";
				Escribir "Por favor ingrese los puntos en orden segun forman la figura";
				Escribir "Componentes de punto A";
				Leer x1,y1;
				Escribir "Componentes de punto B";
				Leer x2,y2;
				Escribir "Componentes de punto C";
				Leer x3,y3;
				Escribir "Componentes de punto D";
				Leer x4,y4;
				ab=(((x2-x1)^2)+((y2-y1)^2));
				ac=(((x3-x1)^2)+((y3-y1)^2));
				ad=(((x4-x1)^2)+((y4-y1)^2));
				si ab+ac=ad || ab+ad=ac || ad+ac=ab Entonces
					Escribir " Los Puntos Forman un Rectangulo";
				SiNo
					Escribir " Los Puntos NO Forman un Rectangulo";
				FinSi
				
			3:
				Escribir "Ingrese por Favor los Numeros que va a dividir";
				Escribir "Dividendo";
				Leer n1;
				Escribir "Divisor";
				Leer n2;
				resultado=n1/n2;
				resultado = resultado*100;
				resultado=trunc(resultado);
				resultado= resultado/100;
				Escribir "La division es igual a: ", resultado;
				resultado=redon(resultado);
				Escribir "El valor redondeado es: ", resultado;
			4:
				Escribir "Calculadora Circulos de Descartes";
				Escribir "Por favor, ingrese los radios de los circulos tangentes entre si";
				
				Leer r1,r2,r3;
				k1= (1/r1);
				k2= (1/r2);
				k3= (1/r3);
				k4ma=k1+k2+k3+(2*rc((k1*k2)+(k2*k3)+(k1*k3)));
				k4me=k1+k2+k3-(2*rc((k1*k2)+(k2*k3)+(k1*k3)));
				si abs(1/k4ma)>abs(1/k4me)Entonces
					Escribir "El radio del circulo mayor es de: ", abs(1/k4ma);
					Escribir "El radio del circulo menor es de: ", abs(1/k4me);
				SiNo
					Escribir "El radio del circulo mayor es de: ", abs(1/k4me);
					Escribir "El radio del circulo menor es de: ", abs(1/k4ma);
				FinSi
				
				
			De Otro Modo:
				Escribir " opcion no valida";
		FinSegun
			Escribir '¿Desea volver al menú inicial? (Si=1 y No=2)';
			Leer resp;
			Escribir "";
			Escribir "";
	Hasta que resp=2;
FinProceso
