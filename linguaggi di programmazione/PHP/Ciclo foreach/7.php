<!-- Scrivere un programma PHP che calcola la media degli elementi di un array. -->

<?php
$numbers = [10, 5, 8, 12, 6];
$total = 0;
$count = count($numbers);

foreach ($numbers as $number) {
    $total += $number;
}

$average = $total / $count;
echo "La media degli elementi dell'array è: " . $average;
?>