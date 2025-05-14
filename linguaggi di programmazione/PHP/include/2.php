<!-- Crea un file config.php che contiene alcune variabili di configurazione, ad esempio l'URL del database. Utilizza l'istruzione include per includere il file config.php in un file database.php e utilizza le variabili di configurazione. -->

// database.php
<?php include 'config.php'; ?>
<?php
$dbUrl = 'mysql://username:password@localhost/database';
$conn = mysqli_connect($dbUrl);
// ...
?>

// config.php
<?php
$databaseUrl = 'mysql://username:password@localhost/database';
$apiKey = 'my-api-key';
?>
