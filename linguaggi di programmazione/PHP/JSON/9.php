<!-- Scrivi un codice PHP per contare il numero di elementi in un array JSON. -->

<?php
$jsonString = file_get_contents('data.json');
$array = json_decode($jsonString, true);

$count = count($array);
echo "Il numero di elementi nell'array è: $count";
?>