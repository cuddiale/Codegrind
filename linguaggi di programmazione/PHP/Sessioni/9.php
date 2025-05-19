<!-- Scrivi un codice PHP per controllare se una sessione è attiva. -->

<?php
if (session_status() === PHP_SESSION_ACTIVE) {
    echo "La sessione è attiva.";
} else {
    echo "La sessione non è attiva.";
}
?>
