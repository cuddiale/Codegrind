<!-- Utilizzare `mysqli` in modo orientato agli oggetti per connettersi a un database MySQL e gestire gli errori. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

$conn = new mysqli($servername, $username, $password, $dbname);

if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}

echo "Connessione avvenuta con successo";

$conn->close();
?>