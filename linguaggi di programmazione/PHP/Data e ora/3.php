<!-- Scrivi un codice PHP per ottenere la data e l'ora corrente. -->

<?php
$oggi = new DateTime();
echo $oggi->format('Y-m-d H:i:s'); // Output: data e ora correnti nel formato YYYY-MM-DD HH:MM:SS
?>