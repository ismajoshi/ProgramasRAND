<!DOCTYPE html>
<html>
<meta charset="utf-8">
<style type="text/css">
		body{
			font-family: Arial, Helvetica, sans-serif;
		}
		article {
    		float: left;
   			padding: 10px;
   			width: 100%;
   			height: 100%;
   			background-image: linear-gradient(90deg,#9BCCD4,rgba(255,0,0,0));

 		}
 		form{
 			float: left;
   			padding: 10px;
   			width: 100%;
   			background-image: linear-gradient(-90deg,#914ff4,rgba(255,0,0,0));
   			border-style: solid;
 		}
	</style>
<body>
	<article>
		Bienvenido <?php echo $_GET["nombre"]; echo " "; echo $_GET['apellido']; ?><br>
		Sexo: <?php echo $_GET["genero"]; ?><br>
Mes de nacimiento: <?php echo $_GET["mes"]; ?><br>
Direccion: <?php echo $_GET["direccion"]; ?><br><br>
Tu correo electronico es: <?php echo $_GET["email"]; ?>
	</article>


<footer>
	Ismael Moreno 2018 
</footer>
</body>
</html>