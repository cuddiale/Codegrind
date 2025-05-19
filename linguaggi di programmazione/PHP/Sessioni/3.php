<!-- Scrivi un codice PHP per ottenere il valore di una variabile di sessione. -->

<?php
if (isset($_SESSION['username'])) {
    $username = $_SESSION['username'];
    echo "Il valore della variabile di sessione 'username' è: $username";
} else {
    echo "La variabile di sessione 'username' non è stata impostata.";
}
?>
