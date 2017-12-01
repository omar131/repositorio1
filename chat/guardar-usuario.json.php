<?php
//ini_set( 'display_errors', 0 );

header("Content-Type: text/javascript");
$data = json_decode(file_get_contents('php://input'), true);

$dbhost = "localhost";
$dbuser = "dbp";
$dbpass = "internet";
$db = "messenger";



$conn = new mysqli($dbhost, $dbuser, $dbpass,$db) or die("Conexion fallida: %s\n". $conn -> error);

$sql = "SELECT id FROM usuario WHERE nickname ='" . $data["nickname"] . "'";

$result = $conn->query($sql);

if ($result->num_rows > 0) {

	echo "usuario existente, ingrese otros datos";
}
else {
		$sql = "INSERT INTO usuario (id, nombres, apellidos, nickname, password, fecha_registro) VALUES ('','".$data["nombres"]."','".$data["apellidos"]."','".$data["nickname"]."','".$data["password"]."','".$data["fecha_registro"]."')";
}

$result = $conn->query($sql);

if ($result === TRUE) {
	echo '{"nickname": "' . $data["nickname"] . '"}';
}
else {
	echo '{"error": "'.$data["nickname"].'"}';
}
$conn->close();
?>