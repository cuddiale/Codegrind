<!-- Scrivi un codice PHP per scrivere un array in un file JSON. -->

<?php
$array = ['nome' => 'Mario', 'cognome' => 'Rossi', 'età' => 30];
$jsonString = json_encode($array);
file_put_contents('data.json', $jsonString);
?>
