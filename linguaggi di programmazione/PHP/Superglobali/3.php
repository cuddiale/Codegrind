<!-- Stampare alcune informazioni del server utilizzando la superglobale `$_SERVER`. -->

<?php
echo "Indirizzo IP del server: " . $_SERVER['SERVER_ADDR'] . "<br>";
echo "Nome del server: " . $_SERVER['SERVER_NAME'] . "<br>";
echo "Software del server: " . $_SERVER['SERVER_SOFTWARE'] . "<br>";
echo "Metodo della richiesta: " . $_SERVER['REQUEST_METHOD'] . "<br>";
?>