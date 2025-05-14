<!-- Crea un file config.php che contiene le credenziali di accesso al database. Utilizza l'istruzione include per includere il file config.php in un file database.php e utilizza le credenziali per stabilire la connessione al database. -->

// database.php
<?php include 'config.php'; ?>
<?php
$conn = mysqli_connect(DB_HOST, DB_USERNAME, DB_PASSWORD, DB_NAME);
// ...
?>

// config.php
<?php
define('DB_HOST', 'localhost');
define('DB_USERNAME', 'username');
define('DB_PASSWORD', 'password');
define('DB_NAME', 'database');
?>