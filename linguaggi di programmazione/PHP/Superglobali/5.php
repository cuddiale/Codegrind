<!-- Creare un cookie e recuperare il valore del cookie utilizzando `$_COOKIE`. -->

<?php
// Imposta un cookie
setcookie("utente", "Mario Rossi", time() + 3600, "/");

// Recupera il valore del cookie
if(isset($_COOKIE['utente'])) {
    echo "Ciao, " . $_COOKIE['utente'] . "!";
} else {
    echo "Cookie non impostato.";
}
?>

