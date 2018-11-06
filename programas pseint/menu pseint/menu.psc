Proceso clase_1
	Definir opcion,resp como entero
	Definir v1,v2,v3 Como Real
	Repetir
		Escribir " presione 1 para sumar";
		Escribir " presione 2 para restar";
		Escribir " presione 3 para dividir";
		Escribir " presione 4 para multiplicar";
		leer opcion;
		Segun opcion Hacer
			1:
				Escribir " ingrese v1 y v2"
				Leer v1,v2
				v3=v1+v2;
				Escribir "la suma es",v3
			2:
				Escribir " ingrese v1 y v2"
				Leer v1,v2
				v3=v1-v2;
				Escribir "la resta es",v3
			3:
				Escribir " ingrese v1 y v2"
				Leer v1,v2
				si(v2<>0) entonces
				v3=v1/v2;
				Escribir "la division es",v3;
				sino
				Escribir " no se puede dividir para 0"
				FinSi
			4:
				Escribir " ingrese v1 y v2"
				Leer v1,v2
				v3=v1*v2;
				Escribir "la multiplicacion es",v3
			De Otro Modo:
				Escribir " opcion no valida"
		FinSegun
			Escribir '¿Desea volver al menú inicial? (Si=1 y No=2)';
			Leer resp;
	Hasta que resp=2;
FinProceso
