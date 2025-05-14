<!-- Scrivere un programma PHP che dichiara una matrice multidimensionale di stringhe e la stampa. -->

<?php
$matrix = [
    ["A", "B", "C"],
    ["D", "E", "F"],
    ["G", "H", "I"]
];

for ($i = 0; $i < count($matrix); $i++) {
    for ($j = 0; $j < count($matrix[$i]); $j++) {
        echo $matrix[$i][$j] . " ";
    }
    echo "<br>";
}
?>