<!-- Utilizzare `mysqli` in modo procedurale per modificare dati in un database MySQL. -->

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

// Modificare dati
$sql = "UPDATE utenti SET email='nuovo.email@example.com' WHERE id=1";

if (mysqli_query($conn, $sql)) {
    echo "Record aggiornato con successo";
} else {
    echo "Errore: " . $sql . "<br>" . mysqli_error($conn);
}

mysqli_close($conn);
?>