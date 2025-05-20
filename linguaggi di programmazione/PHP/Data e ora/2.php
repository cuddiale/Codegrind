<!-- Scrivi un codice PHP per ottenere l'ora corrente. -->

<?php
$oraCorrente = new DateTime();
echo $oraCorrente->format('H:i:s'); // Output: ora corrente nel formato HH:MM:SS
?>