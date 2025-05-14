<!-- Utilizzare `PDO` per inserire dati in un database MySQL. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $sql = "INSERT INTO utenti (nome, cognome, email) VALUES ('Mario', 'Rossi', 'mario.rossi@example.com')";
    $conn->exec($sql);

    echo "Nuovo record inserito con successo";
} catch(PDOException $e) {
    echo "Errore: " . $e->getMessage();
}

$conn = null;
?>