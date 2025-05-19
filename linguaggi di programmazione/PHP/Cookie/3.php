<!-- Scrivi un codice PHP per verificare se un cookie esiste. -->

<?php
if (isset($_COOKIE['username'])) {
    echo "Il cookie 'username' esiste.";
} else {
    echo "Il cookie 'username' non esiste.";
}
?>