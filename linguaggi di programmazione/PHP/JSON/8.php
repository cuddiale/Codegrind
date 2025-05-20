<!-- Scrivi un codice PHP per calcolare la somma di un campo in un array JSON. -->

<?php
$jsonString = file_get_contents('data.json');
$array = json_decode($jsonString, true);

$sum = array_reduce($array, function($carry, $item) {
    return $carry + $item['età'];
}, 0);

echo "La somma delle età è: $sum";
?>