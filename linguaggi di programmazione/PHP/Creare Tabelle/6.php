<!-- Utilizzare `PDO` per creare una tabella in un database MySQL e gestire gli errori. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $sql = "CREATE TABLE utenti (
        id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
        nome VARCHAR(30) NOT NULL,
        cognome VARCHAR(30) NOT NULL,
        email VARCHAR(50),
        reg_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
    )";

    $conn->exec($sql);
    echo "Tabella utenti creata con successo";
} catch(PDOException $e) {
    echo "Errore nella creazione della tabella: " . $e->getMessage();
}

$conn = null;
?>