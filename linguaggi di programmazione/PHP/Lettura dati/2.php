<!-- Utilizzare `mysqli` in modo procedurale per leggere dati da un database MySQL. -->

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

// Leggere dati
$sql = "SELECT id, nome, cognome, email FROM utenti";
$result = mysqli_query($conn, $sql);

if (mysqli_num_rows($result) > 0) {
    while($row = mysqli_fetch_assoc($result)) {
        echo "ID: " . $row["id"]. " - Nome: " . $row["nome"]. " " . $row["cognome"]. " - Email: " . $row["email"]. "<br>";
    }
} else {
    echo "0 risultati";
}

mysqli_close($conn);
?>