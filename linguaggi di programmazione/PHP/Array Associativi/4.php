<!-- Scrivere un programma PHP che dichiara un array associativo di temperature giornaliere (giorno => temperatura) e trova la temperatura massima utilizzando la funzione "max". -->

<?php
$temperatures = [
    "Lunedì" => 25,
    "Martedì" => 28,
    "Mercoledì" => 30,
    "Giovedì" => 27
];

$maxTemperature = max($temperatures);

echo "La temperatura massima registrata è: " . $maxTemperature . " gradi";
?>
