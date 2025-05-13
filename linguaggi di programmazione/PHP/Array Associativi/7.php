<!-- Scrivere un programma PHP che dichiara un array associativo di città (nome => popolazione) e verifica se una città specifica è presente utilizzando la funzione "array_key_exists". -->

<?php
$cities = [
    "Milano" => 1500000,
    "Roma" => 2800000,
    "Napoli" => 1000000,
    "Torino" => 900000
];

$searchCity = "Roma";

if (array_key_exists($searchCity, $cities)) {
    echo $searchCity . " è presente nell'elenco delle città.";
} else {
    echo $searchCity . " non è presente nell'elenco delle città.";
}
?>