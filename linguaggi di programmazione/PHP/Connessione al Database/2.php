<!-- Utilizzare `mysqli` in modo procedurale per connettersi a un database MySQL. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

$conn = mysqli_connect($servername, $username, $password, $dbname);

if (!$conn) {
    die("Connessione fallita: " . mysqli_connect_error());
}

echo "Connessione avvenuta con successo";

mysqli_close($conn);
?>