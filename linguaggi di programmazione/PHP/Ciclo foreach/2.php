<!-- Scrivere un programma PHP che calcola la somma degli elementi di un array. -->

<?php
$numbers = [10, 20, 30, 40, 50];
$sum = 0;

foreach ($numbers as $number) {
    $sum += $number;
}

echo "La somma degli elementi dell'array è: " . $sum;
?>