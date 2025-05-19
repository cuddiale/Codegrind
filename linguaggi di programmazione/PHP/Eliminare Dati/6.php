<!-- Utilizzare `PDO` per eliminare dati in un database MySQL e gestire gli errori. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $sql = "DELETE FROM utenti WHERE id=1";
    $stmt = $conn->prepare($sql);
    $stmt->execute();

    echo $stmt->rowCount() . " record eliminato con successo";
} catch(PDOException $e) {
    echo "Errore: " . $e->getMessage();
}

$conn = null;
?>