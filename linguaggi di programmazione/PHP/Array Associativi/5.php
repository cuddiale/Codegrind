<!-- Scrivere un programma PHP che dichiara un array associativo di parole (parola => lunghezza) e stampa le parole più lunghe. -->

<?php
$words = [
    "casa" => 4,
    "albero" => 6,
    "macchina" => 7,
    "giardino" => 8
];

$maxLenght = max($words);

foreach ($words as $word => $length) {
    if ($length == $maxLenght) {
        echo $word . "<br>";
    }
}
?>
