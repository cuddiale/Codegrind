<!-- Utilizzare `mysqli` in modo orientato agli oggetti per inserire dati in un database MySQL. -->

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

// Inserire dati
$sql = "INSERT INTO utenti (nome, cognome, email) VALUES ('Mario', 'Rossi', 'mario.rossi@example.com')";

if ($conn->query($sql) === TRUE) {
    echo "Nuovo record inserito con successo";
} else {
    echo "Errore: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>