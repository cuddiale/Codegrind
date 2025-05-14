<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di temperature giornaliere (giorno => [minima, massima]) e stampa la temperatura media per ogni giorno. -->

<?php
$temperatures = [
    "Lunedì" => [15, 25],
    "Martedì" => [18, 28],
    "Mercoledì" => [20, 30],
    "Giovedì" => [17, 27]
];

foreach ($temperatures as $day => $values) {
    $average = array_sum($values) / count($values);
    echo "Giorno: " . $day . ", Temperatura media: " . $average . "<br>";
}
?>