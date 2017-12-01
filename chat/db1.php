<?php

$servidor = "localhost";
$usuario= "dbp";
$password = "internet";
$base_datos = "messenger";



$conexion = new mysqli($servidor, $usuario, $password, $base_datos);


function formatearFecha($fecha){
	return date('g:i a', strtotime($fecha));
}


?>