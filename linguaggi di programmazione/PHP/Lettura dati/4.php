<!-- Utilizzare `mysqli` in modo orientato agli oggetti per leggere dati da un database MySQL e gestire gli errori. -->

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

// Leggere dati
$sql = "SELECT id, nome, cognome, email FROM utenti";
$result = $conn->query($sql);

if ($result->num_rows > 0) {
    while($row = $result->fetch_assoc()) {
        echo "ID: " . $row["id"]. " - Nome: " . $row["nome"]. " " . $row["cognome"]. " - Email: " . $row["email"]. "<br>";
    }
} else {
    echo "0 risultati";
}

$conn->close();
?>