<!-- Utilizzare `mysqli` in modo procedurale per eliminare dati in un database MySQL e gestire gli errori. -->

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

// Eliminare dati
$sql = "DELETE FROM utenti WHERE id=1";

if (mysqli_query($conn, $sql)) {
    echo "Record eliminato con successo";
} else {
    echo "Errore: " . $sql . "<br>" . mysqli_error($conn);
}

mysqli_close($conn);
?>