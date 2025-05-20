<!-- Scrivi un codice PHP per aggiungere un numero specifico di giorni a una data. -->

<?php
$data = new DateTime('2023-05-25');
$data->modify('+5 days');
echo $data->format('Y-m-d'); // Output: data dopo l'aggiunta di 5 giorni nel formato YYYY-MM-DD
?>