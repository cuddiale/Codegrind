<!-- Recuperare una variabile d'ambiente utilizzando `$_ENV`. -->

<?php
putenv("UTENTE=Mario");

if(isset($_ENV['UTENTE'])) {
    echo "Utente: " . $_ENV['UTENTE'];
} else {
    echo "Variabile d'ambiente non impostata.";
}
?>