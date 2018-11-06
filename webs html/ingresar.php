<?php
 $server ="localhost";
 $dbase ="usuarios";
 $user ="root";
 $pass ="topo112topo1";
 $br = "<br/>";

     //$conn = new PDO('mysql:host=localhost;dbname=base','root','topo112topo1');
	 mysql_connect($server, $user, $pass)or die ('MySQL Not found // Could Not Connect.');
	 mysql_select_db("base") or die ("No Database found.");
     echo 'Conexion realizada';
	echo $br;

	
 
/* @var $_POST type */
$nombre= $_POST["txtusuario"];
$pass= $_POST["txtpassword"];

 
 $query=("SELECT user,pass FROM `tblusuarios` "
         . "WHERE `user`='".mysql_escape_string($nombre)."' and "
         . "`pass`='".mysql_escape_string($pass)."'"); 
		 
//echo $query;

$rs= mysql_query($query);
$row=mysql_fetch_object($rs); 
$nr = mysql_num_rows($rs);



if($nr == 1){ 
   
echo 'Se ha ingresado como',"\n", $nombre; 
} 

else if($nr == 0) {   
	header("Location:segundo.html");
}  
 

?>