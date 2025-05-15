<!-- Utilizzare `mysqli` in modo orientato agli oggetti per modificare dati in un database MySQL e gestire gli errori. -->

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

// Modificare dati
$sql = "UPDATE utenti SET email='nuovo.email@example.com' WHERE id=1";

if ($conn->query($sql) === TRUE) {
    echo "Record aggiornato con successo";
} else {
    echo "Errore: " . $sql . "<br>" . $conn->error;
}

$conn->close();
?>