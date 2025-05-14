<!-- Utilizzare `mysqli` in modo procedurale per creare una tabella in un database MySQL e gestire gli errori. -->

<?php
$servername = "localhost";
$username = "root";
$password = "";
$dbname = "test";

// Creare connessione
$conn = mysqli_connect($servername, $username, $password, $dbname);

// Verificare connessione
if (!$conn) {
    die("Connessione fallita: " . mysqli_connect_error());
}

// Creare tabella
$sql = "CREATE TABLE utenti (
    id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(30) NOT NULL,
    cognome VARCHAR(30) NOT NULL,
    email VARCHAR(50),
    reg_date TIMESTAMP DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP
)";

if (mysqli_query($conn, $sql)) {
    echo "Tabella utenti creata con successo";
} else {
    echo "Errore nella creazione della tabella: " . mysqli_error($conn);
}

mysqli_close($conn);
?>