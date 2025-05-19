<!-- Scrivi un codice PHP per ottenere il valore di un cookie. -->

<?php
if (isset($_COOKIE['username'])) {
    $username = $_COOKIE['username'];
    echo "Il valore del cookie 'username' è: $username";
} else {
    echo "Il cookie 'username' non è stato impostato.";
}
?>