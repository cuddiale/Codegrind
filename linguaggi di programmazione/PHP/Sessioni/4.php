<!-- Scrivi un codice PHP per verificare se una variabile di sessione esiste. -->

<?php
if (isset($_SESSION['username'])) {
    echo "La variabile di sessione 'username' esiste.";
} else {
    echo "La variabile di sessione 'username' non esiste.";
}
?>