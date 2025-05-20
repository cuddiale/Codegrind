<!-- Scrivi un codice PHP per convertire un array in una stringa JSON. -->

<?php
$array = ['nome' => 'Mario', 'cognome' => 'Rossi', 'età' => 30];
$jsonString = json_encode($array);
echo $jsonString;
?>