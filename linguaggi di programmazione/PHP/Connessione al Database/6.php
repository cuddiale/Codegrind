<!-- Utilizzare `PDO` per connettersi a un database MySQL e gestire gli errori. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);
    echo "Connessione avvenuta con successo";
} catch(PDOException $e) {
    echo "Connessione fallita: " . $e->getMessage();
}

$conn = null;
?>