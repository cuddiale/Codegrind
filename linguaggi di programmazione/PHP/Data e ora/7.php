<!-- Scrivi un codice PHP per ottenere la data di domani. -->

<?php
$oggi = new DateTime();
$domani = $oggi->modify('+1 day');
echo $domani->format('Y-m-d'); // Output: data di domani nel formato YYYY-MM-DD
?>
