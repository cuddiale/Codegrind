<!-- Utilizzare `PDO` per leggere dati da un database MySQL. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

try {
    $conn = new PDO("mysql:host=$servername;dbname=$dbname", $username, $password);
    $conn->setAttribute(PDO::ATTR_ERRMODE, PDO::ERRMODE_EXCEPTION);

    $stmt = $conn->prepare("SELECT id, nome, cognome, email FROM utenti");
    $stmt->execute();

    $result = $stmt->setFetchMode(PDO::FETCH_ASSOC);
    foreach($stmt->fetchAll() as $row) {
        echo "ID: " . $row["id"]. " - Nome: " . $row["nome"]. " " . $row["cognome"]. " - Email: " . $row["email"]. "<br>";
    }
} catch(PDOException $e) {
    echo "Errore: " . $e->getMessage();
}

$conn = null;
?>