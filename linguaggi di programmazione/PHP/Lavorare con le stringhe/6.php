<!-- Scrivi un codice PHP che rimuove gli spazi bianchi all'inizio e alla fine di una stringa. -->

<?php

$stringa = "   Ciao, sono una stringa!   ";
$stringa_senza_spazi = trim($stringa);

echo $stringa_senza_spazi;

?>