<!-- Scrivi un codice PHP per ottenere la data di ieri. -->

<?php
$oggi = new DateTime();
$ieri = $oggi->modify('-1 day');
echo $ieri->format('Y-m-d'); // Output: data di ieri nel formato YYYY-MM-DD
?>