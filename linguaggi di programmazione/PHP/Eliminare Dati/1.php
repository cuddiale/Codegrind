<!-- Utilizzare `mysqli` in modo orientato agli oggetti per eliminare dati in un database MySQL. -->

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

// Eliminare dati
$sql = "DELETE FROM utenti WHERE id=1";

if ($conn->query($sql) === TRUE) {
    echo "Record eliminato con successo";
} else {
    echo "Errore: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>