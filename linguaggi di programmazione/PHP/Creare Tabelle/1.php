<!-- Utilizzare `mysqli` in modo orientato agli oggetti per creare una tabella in un database MySQL. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

// Creare connessione
$conn = new mysqli($servername, $username, $password, $dbname);

// Verificare connessione
if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}

// Creare tabella
$sql = "CREATE TABLE utenti (
    id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(30) NOT NULL,
    cognome VARCHAR(30) NOT NULL,
    email VARCHAR(50),
    reg_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
)";

if ($conn->query($sql) === TRUE) {
    echo "Tabella utenti creata con successo";
} else {
    echo "Errore nella creazione della tabella: " . $conn->error;
}

$conn->close();
?>