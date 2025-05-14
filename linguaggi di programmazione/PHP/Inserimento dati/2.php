<!-- Utilizzare `mysqli` in modo procedurale per inserire dati in un database MySQL. -->

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

// Inserire dati
$sql = "INSERT INTO utenti (nome, cognome, email) VALUES ('Mario', 'Rossi', 'mario.rossi@example.com')";

if (mysqli_query($conn, $sql)) {
    echo "Nuovo record inserito con successo";
} else {
    echo "Errore: " . $sql . "<br>" . mysqli_error($conn);
}

mysqli_close($conn);
?>