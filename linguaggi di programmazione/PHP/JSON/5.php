<!-- Scrivi un codice PHP per aggiungere un nuovo elemento a un array JSON esistente. -->

<?php
$jsonString = file_get_contents('data.json');
$array = json_decode($jsonString, true);

$newData = ['nome' => 'Luca', 'cognome' => 'Verdi', 'età' => 25];
$array[] = $newData;

$jsonString = json_encode($array);
file_put_contents('data.json', $jsonString);
?>