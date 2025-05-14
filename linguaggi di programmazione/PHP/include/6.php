<!-- Crea una cartella config e all'interno crea un file constants.php che definisce alcune costanti, ad esempio le credenziali di accesso a un servizio esterno. Utilizza l'istruzione include per includere il file constants.php in un file api.php e utilizza le costanti. -->

// api.php
<?php include 'config/constants.php'; ?>
<?php
$apiKey = API_KEY;
// ...
?>

// config/constants.php
<?php
define('API_KEY', 'my-api-key');
define('API_URL', 'https://api.example.com');
?>