<!-- Scrivi un codice PHP per ottenere la data corrente. -->

<?php
$oggi = new DateTime();
echo $oggi->format('Y-m-d'); // Output: data corrente nel formato YYYY-MM-DD
?>
