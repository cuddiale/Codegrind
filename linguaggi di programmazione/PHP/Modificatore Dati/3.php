<!-- Utilizzare `PDO` per modificare dati in un database MySQL. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $sql = "UPDATE utenti SET email='nuovo.email@example.com' WHERE id=1";
    $stmt = $conn->prepare($sql);
    $stmt->execute();

    echo $stmt->rowCount() . " record aggiornato con successo";
} catch(PDOException $e) {
    echo "Errore: " . $e->getMessage();
}

$conn = null;
?>